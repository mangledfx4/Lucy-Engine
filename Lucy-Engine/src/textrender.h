// textrender.h

#include <SDL.h>

#ifndef TEXTRENDER_H
#define TEXTRENDER_H

int draw_text(int Y, int X, int width, int height, const char *text, const char *font_file);
void make_window(const char *name);
#endif
