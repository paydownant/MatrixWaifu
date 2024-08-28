
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
  char *vertex_shader_text, *fragment_shader_text;

  /* Loading Shader Files */
  load_shader_text(&vertex_shader_text, "../shaders/vertex_shader.txt");
  load_shader_text(&fragment_shader_text, "../shaders/fragment_shader.txt");
  if (vertex_shader_text == nullptr || fragment_shader_text == nullptr) {
    glfwTerminate();
    error_callback(1, "Failed to load shaders");
    exit(EXIT_FAILURE);
  }

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
  glDeleteShader(vertex_shader);
  glDeleteShader(fragment_shader);
  free_shader_text(vertex_shader_text);
  free_shader_text(fragment_shader_text);


  GLuint gl_buffer;
  glGenVertexArrays(1, &gl_buffer);
  glBindBuffer(GL_ARRAY_BUFFER, gl_buffer);

  /* Create Vertex Buffer Data */
  int width, height;
  createVertexBuffer("../image/1.png", &width, &height);

  /* Main Loop */
  frame_lapsed = 0;
  while (!glfwWindowShouldClose(window)) {
    glClear(GL_COLOR_BUFFER_BIT);
    
    drawVertexBuffer(gl_buffer, width * height);

    glfwSwapBuffers(window);
    glfwPollEvents();

    frame_lapsed += 1;
  }

  
}

void GUI::drawVertexBuffer(GLuint gl_buffer, int vertex_size) {
  glBufferData(GL_ARRAY_BUFFER, sizeof(vertex_t) * vertex_size, vertices, GL_DYNAMIC_DRAW);
  glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)0);
  glEnableVertexAttribArray(0);
  glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)(sizeof(float) * 2));
  glEnableVertexAttribArray(1);

  // updateVertexDataCircle(0.5);

  glBindVertexArray(gl_buffer);
  // glPointSize(10);
  glDrawArrays(GL_POINTS, 0, vertex_size);
}

bool GUI :: createVertexBuffer(const char *file_name, int* width, int* height) {
  
  // image load here
  ImageSource img(file_name, 1);

  printf("%d x %d\n", img.w, img.h);

  vertices = (vertex_t*)malloc(sizeof(vertex_t) * img.w * img.h);
  if (vertices == nullptr) {
    fprintf(stderr, "Failed to allocate memory for %d vertices\n", img.w * img.h);
    return false;
  }

  for (u_int i = 0; i < img.w; ++i) {
    for (u_int j = 0; j < img.h; ++j) {
      vertices[i * img.w + j].x = (float)i / 256;
      vertices[i * img.w + j].y = (float)j / 256;
    }
  }

  printf("%d x %d\n", img.w, img.h);


  *width = img.w;
  *height = img.h;

  return true;
}

void GUI :: updateVertexDataCircle(float radius) {
  
  if (node_x > radius) {
    var = -1;
    var2 = -1;
  } else if (node_x < -radius) {
    var = 1;
    var2 = 1;
  }

  if (var == 1) {
    node_x += 0.01f;
  } else if (var == -1) {
    node_x -= 0.01f;
  }

  node_y = var2 * sqrt(radius * radius - node_x * node_x);

  vertices[0].x = node_x;
  vertices[0].y = node_y;

  vertices[1].x = -node_x;
  vertices[1].y = -node_y;

  vertices[2].x = -node_y;
  vertices[2].y = node_x;
  
  vertices[3].x = node_y;
  vertices[3].y = -node_x;

}