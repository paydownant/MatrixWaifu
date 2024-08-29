#ifndef IMAGESOURCE_H
#define IMAGESOURCE_H

#include <stdint.h>
#include <cstdio>

enum ImageType {
  INVALID, PNG, JPG, BMP
};

enum Channels {
  R, G, B, Alpha
};

class ImageSource {
public:
  ImageSource(const char* filename, const int channels);
  ImageSource(int w, int h, int channels);
  ImageSource(const ImageSource& img);
  ~ImageSource();

  bool read(const char* filename);
  bool write(const char* filename);

private:
  ImageType getFileType(const char* filename);
  int channels;

public:
  int w;
  int h;
  int components;
  uint8_t* data = NULL;
  size_t size = 0;

private:

};

#endif