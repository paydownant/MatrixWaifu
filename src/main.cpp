#include "gui.h"

#include "imagesource.h"

int main(int argc, char **argv) {
  GUI *gui = new GUI("../image/satania1.png");
  gui->run();
}