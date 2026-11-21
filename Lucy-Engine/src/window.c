#include "window.h"

//int X_size = 1280;
//int Y_size = 720;

SDL_Window *window;
SDL_Renderer *renderer;

void create_window(const char *window_name)
{
    SDL_Init(SDL_INIT_VIDEO);

    window = SDL_CreateWindow(
        window_name,
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        1280,
        720,
        SDL_WINDOW_OPENGL
    );
}

void create_renderer(void)
{
    renderer = SDL_CreateRenderer(
        window,
        -1,
        SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC
    );

    if (!renderer)
    {
        printf("RENDERER ERROR: %s\n", SDL_GetError());
    }
}
// #include <SDL.h>
//
// int main(void)
// {
//     SDL_Init(SDL_INIT_VIDEO);
//
//     SDL_Window *window = SDL_CreateWindow(
//         "My Engine",
//         SDL_WINDOWPOS_CENTERED,
//         SDL_WINDOWPOS_CENTERED,
//         1280,
//         720,
//         SDL_WINDOW_OPENGL
//     );
//
//     SDL_Delay(5000);
//
//     SDL_DestroyWindow(window);
//     SDL_Quit();
/*
    return 0;
}*/
