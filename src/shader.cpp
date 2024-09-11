#include "shader.h"

char* loadShaderText(const char *file_path) {

  FILE *ifp = fopen(file_path, "r");
  if (ifp == nullptr) {
    return nullptr;
  }

  fseek(ifp, 0, SEEK_END);
  
  u_int size = ftell(ifp);

  fseek(ifp, 0, SEEK_SET);


  char buffer[256];
  fread(&buffer, size, sizeof(char), ifp);

  char *shader = strndup(buffer, size);

  fclose(ifp);

  return shader;
}