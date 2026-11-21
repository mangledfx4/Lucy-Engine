#ifndef WINDOW_H
#define WINDOW_H

#include <SDL2/SDL.h>
#include <GL/gl.h>

extern SDL_Window *window;
extern SDL_Renderer *renderer;

void create_window(const char *window_name);
//void create_3d_window(const char *window_3d_name);
void create_renderer(void);

#endif
