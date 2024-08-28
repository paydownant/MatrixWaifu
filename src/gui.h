#ifndef GUI_H
#define GUI_H

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>
#include <glad/gl.h>

#include "shader.h"
#include "imagesource.h"

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cstdint>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <arpa/inet.h>
#include <math.h>


static void error_callback(int error, const char* description);
static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);


class GUI {

private:
  GLFWwindow *window;

  struct vertex_t {
    float x = 0, y = 0;
    float r, g, b;
  };

  vertex_t *vertices;

  float node_x = 0, node_y = 0;
  int var, var2;
  u_int frame_lapsed;


public:
  GUI();
  ~GUI();
  void launch();

private:

  void drawVertexBuffer(GLuint gl_buffer, int vertex_size);

  bool createVertexBuffer(const char *file_name, int* width, int* height);


  void updateVertexDataCircle(float radius);

};

#endif