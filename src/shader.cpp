#include "shader.h"

void load_shader_text(char **shader_text, const char *file_path) {

  FILE *ifp = fopen(file_path, "r");
  if (ifp == nullptr) {
    return;
  }

  fseek(ifp, 0, SEEK_END);
  
  u_int size = ftell(ifp);

  fseek(ifp, 0, SEEK_SET);


  char buffer[256];
  fread(&buffer, size, sizeof(char), ifp);

  *shader_text = strndup(buffer, size);


  fclose(ifp);
}