
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
  
  window = glfwCreateWindow(640, 640, "Window", nullptr, nullptr);
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

void GUI :: launch() {

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

  /* Create Vertex Buffer Data */
  int width, height;
  
  if (!createVertexBuffer("../image/anime.png", &width, &height)) {
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
    
    
    glViewport(0, 0, w, h);

    glClear(GL_COLOR_BUFFER_BIT);
  
      
    glUseProgram(shader_program);
    glUniformMatrix4fv(mvp_location, 1, GL_FALSE, (const GLfloat*) &mvp);
    glBindVertexArray(gl_buffer);
    // glPointSize(10);
    glDrawArrays(GL_POINTS, 0, width * height);


    glfwSwapBuffers(window);
    glfwPollEvents();

    frame_lapsed += 1;
  }

  
}

bool GUI :: createVertexBuffer(const char *file_name, int* width, int* height) {
  
  // image load here
  Image img(file_name);

  printf("%d x %d\n", img.w, img.h);

  vertices = (vertex_t*)malloc(sizeof(vertex_t) * img.w * img.h);
  if (vertices == nullptr) {
    fprintf(stderr, "Failed to allocate memory for %d vertices\n", img.w * img.h);
    return false;
  }

  for (u_int i = 0; i < img.w; ++i) {
    for (u_int j = 0; j < img.h; ++j) {
      u_int index = i * img.h + j;
      vertices[index].pos[0] = (float)i / img.w - 0.5;
      vertices[index].pos[1] = (float)j / img.h - 0.5;

      u_int dataIndex = j * img.w + i;

      vertices[index].col[0] = (float)img.data[dataIndex] / 256;
      vertices[index].col[1] = (float)img.data[dataIndex] / 256;
      vertices[index].col[2] = (float)img.data[dataIndex] / 256;
    }
  }

  *width = img.w;
  *height = img.h;

  printf("Vertex Buffer Created!\n");

  return true;
}