#include "gui.h"

#include "imagesource.h"

int main(int argc, char **argv) {
  GUI *gui = new GUI();
  gui->load_image("../image/satania1.png");
  gui->launch(0.05, 4.0);
}