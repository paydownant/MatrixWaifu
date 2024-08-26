#ifndef GUI_H
#define GUI_H

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>
#include <glad/gl.h>

#include <stdio.h>
#include <stdlib.h>

#include "shader.h"

static void error_callback(int error, const char* description);
static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);


class GUI {

public:
  GUI();
  ~GUI();


void launch();

private:

  GLFWwindow *window;

  struct vertice_t {
    float x = 0, y = 0;
    float r, g, b;
  } vertices[2];

  int var, var2;
  u_int frame_lapsed;


  void updateVertexData();

};

#endif