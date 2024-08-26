#include "gui.h"
#include "shader.h"


#include <math.h>

static void error_callback(int error, const char* description) {
  fprintf(stderr, "Error: %s\n", description);
}

static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods) {
  if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) {
    glfwSetWindowShouldClose(window, GLFW_TRUE);
  }  
}


GUI::GUI() {

  glfwSetErrorCallback(error_callback);

  if (!glfwInit()) {
    error_callback(1, "GLFW INIT FAIL");
    exit(EXIT_FAILURE);
  }

  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
  
  window = glfwCreateWindow(640, 480, "Window", nullptr, nullptr);
  if (!window) {
    glfwTerminate();
    error_callback(1, "WINDOW CREATION FAIL");
    exit(EXIT_FAILURE);
  }
}

GUI::~GUI() {

}

void GUI::launch() {

  glfwSetKeyCallback(window, key_callback);
  
  glfwMakeContextCurrent(window);
  gladLoadGL(glfwGetProcAddress);
  glfwSwapInterval(1);

  GLuint vertex_buffer, vertex_shader, fragment_shader, shader_program;
  GLint mvp_location, vpos_location, vcol_location;
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

  /* Main Loop */

  frame_lapsed = 0;
  var = 1;
  while (!glfwWindowShouldClose(window)) {
    glClear(GL_COLOR_BUFFER_BIT);
    
    updateVertexData();

    glBindVertexArray(0);

    int width, height;
    glfwGetFramebufferSize(window, &width, &height);

    // Draw points
    // glUseProgram(shader_program);
    glBindVertexArray(gl_buffer);
    glPointSize(10);
    glDrawArrays(GL_POINTS, 0, 2);

    glfwSwapBuffers(window);
    glfwPollEvents();

    frame_lapsed += 1;
  }

  glfwDestroyWindow(window);
  glfwTerminate();
}


void GUI::updateVertexData() {

  float radius = 0.5;

  glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_DYNAMIC_DRAW);
  glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)0);
  glEnableVertexAttribArray(0);
  glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)(sizeof(float) * 2));
  glEnableVertexAttribArray(1);

  
  if (vertices[0].x > radius) {
    var = -1;
    var2 = -1;
  } else if (vertices[0].x < -radius) {
    var = 1;
    var2 = 1;
  }

  if (var == 1) {
    vertices[0].x += 0.01f;
  } else if (var == -1) {
    vertices[0].x -= 0.01f;
  }

  vertices[0].y = var2 * sqrt(radius * radius - vertices[0].x * vertices[0].x);


  vertices[1].x = -vertices[0].x;
  vertices[1].y = -vertices[0].y;

}