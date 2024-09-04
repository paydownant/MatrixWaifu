
#include "gui.h"


static void error_callback(int error, const char* description) {
  fprintf(stderr, "Error: %s\n", description);
}

static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods) {
  if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) {
    glfwSetWindowShouldClose(window, GLFW_TRUE);
  }
}


GUI :: GUI() {
  /* init glfw */
  glfwSetErrorCallback(error_callback);

  if (!glfwInit()) {
    error_callback(1, "GLFW INIT FAIL");
    exit(EXIT_FAILURE);
  }

  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 5);
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
  
  window = glfwCreateWindow(640, 640, "MatrixWaifu", glfwGetPrimaryMonitor(), nullptr);
  if (!window) {
    error_callback(1, "WINDOW CREATION FAIL");
    glfwTerminate();
    exit(EXIT_FAILURE);
  }

  glfwMakeContextCurrent(window);

  /* load shaders */
  GLuint vertex_shader = glCreateShader(GL_VERTEX_SHADER);
  GLchar *vertex_shader_text = loadShaderText("../shaders/vertex_shader.txt");
  glShaderSource(vertex_shader, 1, &vertex_shader_text, nullptr);
  glCompileShader(vertex_shader);

  GLuint fragment_shader = glCreateShader(GL_FRAGMENT_SHADER);
  GLchar *fragment_shader_text = loadShaderText("../shaders/fragment_shader.txt");
  glShaderSource(fragment_shader, 1, &fragment_shader_text, nullptr);
  glCompileShader(fragment_shader);

  shader_program = glCreateProgram();
  glAttachShader(shader_program, vertex_shader);
  glAttachShader(shader_program, fragment_shader);
  glLinkProgram(shader_program);

  glDeleteShader(vertex_shader);
  glDeleteShader(fragment_shader);
  free(vertex_shader_text);
  free(fragment_shader_text);

}

GUI :: ~GUI() {
  glfwDestroyWindow(window);
  glfwTerminate();
}

bool GUI :: createVertexBuffer(u_int* actual_width, u_int* actual_height, u_int target_width, u_int target_height) {
  
  // image load here
  Image img(image_file_path);
  free(image_file_path);

  printf("Loaded %d x %d Image\n", img.w, img.h);

  float ratio = 1.0, aspect_ratio = 1.0;
  if (img.w >= img.h) {
    ratio = (float)target_width / img.w;
  } else {
    ratio = (float)target_height / img.h;
  }
  aspect_ratio = (float)img.h / img.w;
  target_width = (u_int)(ratio * img.w);
  target_height = (u_int)(ratio * img.h);

  // Set the target resolutions to correct aspect ratio
  if (img.w >= img.h) {
    target_height = (u_int)(aspect_ratio * target_width);
  } else {
    target_width = (u_int)(target_height / aspect_ratio);
  }

  vertices = (vertex_t*)malloc(sizeof(vertex_t) * target_width * target_height);
  if (vertices == nullptr) {
    fprintf(stderr, "Failed to allocate memory for %d vertices\n", target_width * target_height);
    return false;
  }

  for (u_int i = 0; i < target_width; ++i) {
    for (u_int j = 0; j < target_height; ++j) {
      u_int index = j * target_width + i;
      vertices[index].pos[0] = ((float)i / target_width - 0.5) * 2;
      vertices[index].pos[1] = ((float)j / target_height - 0.5) * 2;

      u_int dataIndex = (u_int)((float)j / ratio) * img.w + (u_int)((float)i / ratio);
      float bw_level = (float)img.data[dataIndex] / 256;
      float threshold = 0.005;
      if (bw_level > threshold) {
        vertices[index].col[0] = bw_level;
        vertices[index].col[1] = bw_level;
        vertices[index].col[2] = bw_level;
      } else {
        vertices[index].col[0] = 0;
        vertices[index].col[1] = 0;
        vertices[index].col[2] = 0;
      }
    }
  }

  *actual_width = target_width;
  *actual_height = target_height;

  printf("Created %d x %d Buffer\n", target_width, target_height);

  return true;
}