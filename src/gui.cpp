
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

  glfwSetErrorCallback(error_callback);

  if (!glfwInit()) {
    error_callback(1, "GLFW INIT FAIL");
    exit(EXIT_FAILURE);
  }

  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
  
  window = glfwCreateWindow(640, 640, "MatrixWaifu", glfwGetPrimaryMonitor(), nullptr);
  if (!window) {
    glfwTerminate();
    error_callback(1, "WINDOW CREATION FAIL");
    exit(EXIT_FAILURE);
  }
}

GUI :: ~GUI() {
  glfwDestroyWindow(window);
  glfwTerminate();
}

void GUI :: load_image(const char *image_path) {
  image_file_path = strdup(image_path);
}

void GUI :: launch(float pixel_density, float pixel_size) {
  if (pixel_density) {
    target_pixel_density = pixel_density;
  }
  if (pixel_size) {
    target_pixel_size = pixel_size;
  }

  glfwSetKeyCallback(window, key_callback);
  
  glfwMakeContextCurrent(window);
  gladLoadGL(glfwGetProcAddress);
  glfwSwapInterval(1);

  GLuint vertex_shader, fragment_shader, shader_program;
  char *vertex_shader_text = nullptr, *fragment_shader_text = nullptr;

  /* Loading Shader Files */
  load_shader_text(&vertex_shader_text, "../shaders/vertex_shader.txt");
  load_shader_text(&fragment_shader_text, "../shaders/fragment_shader.txt");
  if (vertex_shader_text == nullptr || fragment_shader_text == nullptr) {
    error_callback(1, "Failed to load shaders");
    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_FAILURE);
  }

  if (image_file_path == nullptr) {
    error_callback(1, "image file path not found\n");
    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_FAILURE);
  }

  int window_width = 0, window_height = 0;
  glfwGetFramebufferSize(window, &window_width, &window_height);

  float actual_pixel_density = target_pixel_density, actual_pixel_size;
  u_int target_width = 0, target_height = 0;
  if (window_width >= window_height) {
    target_width = window_width * actual_pixel_density;
    target_height = window_width * actual_pixel_density;
  } else {
    target_width = window_height * actual_pixel_density;
    target_height = window_height * actual_pixel_density;
  }
  actual_pixel_size = ((float)window_width / 1920) * target_pixel_size;

  /* Create Vertex Buffer Data */
  u_int width, height;
  if (!createVertexBuffer(&width, &height, target_width, target_height)) {
    error_callback(1, "Failed to create vertex buffer");
    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_FAILURE);
  }

  GLuint gl_buffer;
  glGenBuffers(1, &gl_buffer);
  glBindBuffer(GL_ARRAY_BUFFER, gl_buffer);
  glBufferData(GL_ARRAY_BUFFER, sizeof(vertex_t) * width * height, vertices, GL_STATIC_DRAW);

  vertex_shader = glCreateShader(GL_VERTEX_SHADER);
  glShaderSource(vertex_shader, 1, &vertex_shader_text, nullptr);
  glCompileShader(vertex_shader);
  
  fragment_shader = glCreateShader(GL_FRAGMENT_SHADER);
  glShaderSource(fragment_shader, 1, &fragment_shader_text, nullptr);
  glCompileShader(fragment_shader);

  shader_program = glCreateProgram();
  glAttachShader(shader_program, vertex_shader);
  glAttachShader(shader_program, fragment_shader);
  glLinkProgram(shader_program);

  /* Linked So Delete */
  //glDeleteShader(vertex_shader);
  //glDeleteShader(fragment_shader);
  free(vertex_shader_text);
  free(fragment_shader_text);
  
  const GLint mvp_location = glGetUniformLocation(shader_program, "MVP");
  const GLint vpos_location = glGetAttribLocation(shader_program, "vPos");
  const GLint vcol_location = glGetAttribLocation(shader_program, "vCol");

  GLuint gl_array;
  glGenVertexArrays(1, &gl_array);
  glBindVertexArray(gl_array);

  glEnableVertexAttribArray(vpos_location);
  glVertexAttribPointer(vpos_location, 2, GL_FLOAT, GL_FALSE, sizeof(vertex_t), (void*) offsetof(vertex_t, pos));
  glEnableVertexAttribArray(vcol_location);
  glVertexAttribPointer(vcol_location, 3, GL_FLOAT, GL_FALSE, sizeof(vertex_t), (void*) offsetof(vertex_t, col));

  /* Main Loop */
  frame_lapsed = 0;
  while (!glfwWindowShouldClose(window)) {
    
    int w, h;
    mat4x4 m, p, mvp;
    glfwGetFramebufferSize(window, &w, &h);
    const float ratio = w / (float) h;
    mat4x4_identity(m);
    mat4x4_rotate_Z(m, m, 1 * M_PI);
    mat4x4_rotate_Y(m, m, 1 * M_PI);
    mat4x4_ortho(p, -ratio, ratio, -1.f, 1.f, 1.f, -1.f);
    mat4x4_mul(mvp, p, m);
    
    if (glfwGetKey(window, GLFW_KEY_UP) == GLFW_PRESS) {
      actual_pixel_size += 0.1;
    }
    if (glfwGetKey(window, GLFW_KEY_DOWN) == GLFW_PRESS) {
      actual_pixel_size -= 0.1;
    }
    if (actual_pixel_size > 10.0) {
      actual_pixel_size = 10.0;
    }
    if (actual_pixel_size < 0.1) {
      actual_pixel_size = 0.1;
    }

    
    glViewport(0, 0, w, h);

    glClear(GL_COLOR_BUFFER_BIT);
  
      
    glUseProgram(shader_program);
    glUniformMatrix4fv(mvp_location, 1, GL_FALSE, (const GLfloat*) &mvp);
    glBindVertexArray(gl_buffer);
    glPointSize(actual_pixel_size);
    glDrawArrays(GL_POINTS, 0, width * height);


    glfwSwapBuffers(window);
    glfwPollEvents();

    frame_lapsed += 1;
  }

  
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