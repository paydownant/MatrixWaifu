#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>
#include <glad/gl.h>

#include <stdio.h>
#include <stdlib.h>

#include "shader.h"


static const struct {
    float x, y;
    float r, g, b;
} vertices[4] = {
  { -0.5f, -0.5f, 1.f, 1.f, 1.f },
  {  0.5f, -0.5f, 1.f, 1.f, 1.f },
  {  0.5f,  0.5f, 1.f, 1.f, 1.f },
  { -0.5f,  0.5f, 1.f, 1.f, 1.f }
};

static void error_callback(int error, const char* description) {
  fprintf(stderr, "Error: %s\n", description);
}

static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods) {
  if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) {
    glfwSetWindowShouldClose(window, GLFW_TRUE);
  }  
}

int main(int argc, char **argv) {

  GLFWwindow* window;
  GLuint vertex_buffer, vertex_shader, fragment_shader, shader_program;
  GLint mvp_location, vpos_location, vcol_location;
  char *vertex_shader_text, *fragment_shader_text;


  glfwSetErrorCallback(error_callback);

  /* Initialize the library */
  if (!glfwInit()) {
    exit(EXIT_FAILURE);
  }
  
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);

  /* Create a windowed mode window and its OpenGL context */
  window = glfwCreateWindow(640, 480, "Test", nullptr, nullptr);
  if (!window) {
    glfwTerminate();
    exit(EXIT_FAILURE);
  }

  glfwSetKeyCallback(window, key_callback);

  /* Make the window's context current */
  glfwMakeContextCurrent(window);
  gladLoadGL(glfwGetProcAddress);
  glfwSwapInterval(1);

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


  GLuint VBO, VAO;
  glGenVertexArrays(1, &VAO);
  glGenBuffers(1, &VBO);

  // Bind VAO first, then bind and set VBO, and then configure vertex attributes
  glBindVertexArray(VAO);

  glBindBuffer(GL_ARRAY_BUFFER, VBO);
  glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

  glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)0);
  glEnableVertexAttribArray(0);

  glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)(sizeof(float) * 2));
  glEnableVertexAttribArray(1);


  glBindBuffer(GL_ARRAY_BUFFER, 0); 

  // Unbind VAO (it's always a good thing to unbind any buffer/array to prevent strange bugs)
  glBindVertexArray(0); 

  float size = 0.0;
  float rate = 1.0;

  /* Main Loop */
  while (!glfwWindowShouldClose(window)) {
    int width, height;

    glClear(GL_COLOR_BUFFER_BIT);

    glfwGetFramebufferSize(window, &width, &height);

    if (size >= 10.f) {
      rate = -1.0;
    } else if (size <= 1.0f) {
      rate = 1.0;
    }

    if (rate == 1.0) {
      size += 0.1;
    } else {
      size -= 0.1;
    }

    // Draw points
    // glUseProgram(shader_program);
    glBindVertexArray(VAO);
    glPointSize(size);
    glDrawArrays(GL_POINTS, 0, 4);

    glfwSwapBuffers(window);
    glfwPollEvents();

  }

  glfwDestroyWindow(window);
  glfwTerminate();

}