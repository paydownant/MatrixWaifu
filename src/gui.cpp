
#include "gui.h"


static void error_callback(int error, const char* description) {
  fprintf(stderr, "Error: %s\n", description);
}

GUI :: GUI(const char *file_path) {

  image_file_path = file_path;

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

  gladLoadGL(glfwGetProcAddress);
  glfwSwapInterval(1);

  /* load shaders */
  printf("Creating Vertex Shader...\n");
  GLuint vertex_shader = glCreateShader(GL_VERTEX_SHADER);
  GLchar *vertex_shader_text = loadShaderText("../shaders/vertex_shader.txt");
  glShaderSource(vertex_shader, 1, &vertex_shader_text, nullptr);
  glCompileShader(vertex_shader);

  printf("Creating Fragment Shader...\n");
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
  cleanup();
}

void GUI :: run() {
  initBuffers();

  while (!glfwWindowShouldClose(window)) {
    // Process Input
    processInput();

    // Render
    glClear(GL_COLOR_BUFFER_BIT);
    drawPoints();

    // Swap Buffers
    glfwSwapBuffers(glfwGetCurrentContext());
    glfwPollEvents();
  }
}


void GUI :: cleanup() {
  free(vertices);
  glDeleteVertexArrays(1, &vertex_array);
  glDeleteBuffers(1, &vertex_buffer);
  glDeleteProgram(shader_program);
  glfwDestroyWindow(window);
  glfwTerminate();
}

void GUI :: initBuffers() {

  u_int target_width = 255, target_height = 255;
  if (!createVertexBuffer(target_width, target_height)) {
    error_callback(1, "Failed to generate vertex buffer");
    cleanup();
    exit(1);
  }

  glGenVertexArrays(1, &vertex_array);
  glGenBuffers(1, &vertex_buffer);

  glBindVertexArray(vertex_array);

  glBindBuffer(GL_ARRAY_BUFFER, vertex_buffer);
  glBufferData(GL_ARRAY_BUFFER, sizeof(vertex_t) * width * height, vertices, GL_STATIC_DRAW);

  glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, sizeof(vertex_t), (void*)0);
  glEnableVertexAttribArray(0);
  glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, sizeof(vertex_t), (void*)(2 * sizeof(float)));
  glEnableVertexAttribArray(1);

  glBindBuffer(GL_ARRAY_BUFFER, 0);
  glBindVertexArray(0);
}

void GUI :: drawPoints() {
  glUseProgram(shader_program);
  glBindVertexArray(vertex_array);
  glDrawArrays(GL_POINTS, 0, width * height);
  glBindVertexArray(0);
}

void GUI :: processInput() {
  if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
    glfwSetWindowShouldClose(window, GLFW_TRUE);
  }
}

bool GUI :: createVertexBuffer(u_int target_width, u_int target_height) {
  
  // image load here
  Image img(image_file_path);

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

  for (u_int i = 0; i < target_height; ++i) {
    for (u_int j = 0; j < target_width; ++j) {
      u_int index = i * target_width + j;
      vertices[index].pos[0] = ((float)i / target_width - 0.5) * 2;
      vertices[index].pos[1] = ((float)j / target_height - 0.5) * 2;

      u_int dataIndex = (u_int)((float)i / ratio) * img.w + (u_int)((float)j / ratio);
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

  width = target_width;
  height = target_height;

  printf("Created %d x %d Buffer\n", target_width, target_height);

  return true;
}