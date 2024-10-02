#ifndef GUI_H
#define GUI_H

#define GLAD_GL_IMPLEMENTATION
#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>
#include <glad/gl.h>
#include <glm/glm.hpp>

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

class GUI {

private:
  GLFWwindow *window;
  
  GLuint vertex_array;      // Vertex Array Object
  GLuint vertex_buffer;     // Vertex Buffer Object
  GLuint shader_program;    // Shader Program

  GLuint width, height;

  std::string image_file_path;

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
  GUI(const char *file_path);
  ~GUI();
  void run();
  void cleanup();

private:
  
  void initBuffers();
  void drawPoints();
  void processInput();
  bool createVertexBuffer(u_int target_width, u_int target_height);

};

#endif