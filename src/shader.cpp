#include "shader.h"

void load_shader_text(char **shader_text, const char *file_path) {


  std::ifstream file(file_path);
  if (!file) return;

  std::stringstream shader_stringstream;
  shader_stringstream << file.rdbuf();

  std::string shader_string;
  shader_string = shader_stringstream.str();

  *shader_text = strdup(shader_string.c_str());

  file.close();
}

void free_shader_text(char *shader_text) {
  if (shader_text == nullptr) {
    return;
  }

  free(shader_text);
}