#include "window.h"
#include <SDL2/SDL.h>
#include <GL/gl.h>
#include "3Drenderer.h"
void make_3d_window(int X_size, int Y_size, const char *title) //makes the window the renderer uses
{
    window = SDL_CreateWindow(
        title,
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        X_size,
        Y_size,
        SDL_WINDOW_OPENGL
    );
    printf("Window created\n"); //tells the terminal the window has been made

    SDL_GLContext context = SDL_GL_CreateContext(window);
    glViewport(0, 0, X_size, Y_size);
    glEnable(GL_DEPTH_TEST);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    printf("Camera created\n"); //makes the camera

    glFrustum(
        -1.0, 1.0,    // left, right
        -0.75, 0.75,  // bottom, top
        1.0, 100.0    // near, far
    );

    glMatrixMode(GL_MODELVIEW);
    printf("Camera initilized\n");
    glLoadIdentity(); //initilizes the camera
}
