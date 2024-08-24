#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>
#include <glad/gl.h>

#include <stdio.h>
#include <stdlib.h>
#include "linmath.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstring>

static const struct {
    float x, y;
    float r, g, b;
} vertices[3] = {
  { -0.6f, -0.4f, 1.f, 0.f, 0.f },
  {  0.6f, -0.4f, 0.f, 1.f, 0.f },
  {   0.f,  0.6f, 0.f, 0.f, 1.f }
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
  GLuint vertex_buffer, vertex_shader, fragment_shader, program;
  GLint mvp_location, vpos_location, vcol_location;
  const char *vertex_shader_text, *fragment_shader_text;

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

  glGenBuffers(1, &vertex_buffer);
  glBindBuffer(GL_ARRAY_BUFFER, vertex_buffer);
  glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

  /* Loading Shader Files */
  std::ifstream vert_f("../shaders/vertex_shader.txt"), frag_f("../shaders/fragment_shader.txt");
  if (!vert_f || !frag_f) {
    glfwTerminate();
    error_callback(1, "Failed to load shaders");
    exit(EXIT_FAILURE);
  }

  std::stringstream vertex_shader_ss, fragment_shader_ss;
  vertex_shader_ss << vert_f.rdbuf();
  fragment_shader_ss << frag_f.rdbuf();
  
  std::string vertex_shader_str, fragment_shader_str;
  vertex_shader_str = vertex_shader_ss.str();
  fragment_shader_str = fragment_shader_ss.str();
  vertex_shader_text = vertex_shader_str.c_str();
  fragment_shader_text = fragment_shader_str.c_str();

  printf("%s\n", vertex_shader_text);
  printf("%s\n", fragment_shader_text);

  vertex_shader = glCreateShader(GL_VERTEX_SHADER);
  glShaderSource(vertex_shader, 1, &vertex_shader_text, nullptr);
  glCompileShader(vertex_shader);

  fragment_shader = glCreateShader(GL_FRAGMENT_SHADER);
  glShaderSource(fragment_shader, 1, &fragment_shader_text, nullptr);
  glCompileShader(fragment_shader);

  program = glCreateProgram();
  glAttachShader(program, vertex_shader);
  glAttachShader(program, fragment_shader);
  glLinkProgram(program);

  mvp_location = glGetUniformLocation(program, "MVP");
  vpos_location = glGetAttribLocation(program, "vPos");
  vcol_location = glGetAttribLocation(program, "vCol");

  glEnableVertexAttribArray(vpos_location);
  glVertexAttribPointer(vpos_location, 2, GL_FLOAT, GL_FALSE, sizeof(vertices[0]), (void*) 0);

  glEnableVertexAttribArray(vcol_location);
  glVertexAttribPointer(vcol_location, 3, GL_FLOAT, GL_FALSE, sizeof(vertices[0]), (void*) (sizeof(float) * 2));

  /* Main Loop */
  while (!glfwWindowShouldClose(window)) {
    float ratio;
    int width, height;
    mat4x4 m, p, mvp;

    glfwGetFramebufferSize(window, &width, &height);
    ratio = width / (float)height;

    glViewport(0, 0, width, height);
    glClear(GL_COLOR_BUFFER_BIT);

    mat4x4_identity(m);
    mat4x4_rotate_Z(m, m, (float)glfwGetTime() * 2);
    mat4x4_ortho(p, -ratio, ratio, -1.f, 1.f, 1.f, -1.f);
    mat4x4_mul(mvp, p, m);

    glUseProgram(program);
    glUniformMatrix4fv(mvp_location, 1, GL_FALSE, (const GLfloat*)mvp);
    glDrawArrays(GL_TRIANGLES, 0, 3);

    glfwSwapBuffers(window);
    glfwPollEvents();

  }

  glfwDestroyWindow(window);
  glfwTerminate();

}