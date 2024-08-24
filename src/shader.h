#ifndef SHADER_H
#define SHADER_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstring>

void load_shader_text(char **shader_text, const char *file_path);
void free_shader_text(char *shader_text);


#endif