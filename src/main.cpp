#include "gui.h"

#include "imagesource.h"

int main(int argc, char **argv) {
  GUI *gui = new GUI();
  gui->load_image("../image/5fd.png");
  gui->launch();
}