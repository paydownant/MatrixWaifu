#ifndef GUI_H
#define GUI_H

#define GLAD_GL_IMPLEMENTATION
#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>
#include <glad/gl.h>

#include "shader.h"
#include "imagesource.h"
#include "linmath.h"

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
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

static void error_callback(int error, const char* description);
static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);


class GUI {

private:
  GLFWwindow *window;
  char *image_file_path;

  typedef struct vertex {
    vec2 pos = { 0, 0 };
    vec3 col = { 0, 0, 0 };
  } vertex_t;

  vertex_t *vertices;

  float target_pixel_density = 0.1;
  float target_pixel_size = 4.0;

  float node_x = 0, node_y = 0;
  int var, var2;
  u_int frame_lapsed;


public:
  GUI();
  ~GUI();
  void load_image(const char *image_path);
  void launch(float pixel_density, float pixel_size);

private:

  bool updateVertexBuffer(u_int* actual_width, u_int* actual_height, u_int current_width, u_int current_height);
  bool createVertexBuffer(u_int* actual_width, u_int* actual_height, u_int target_width, u_int target_height);

};

#endif