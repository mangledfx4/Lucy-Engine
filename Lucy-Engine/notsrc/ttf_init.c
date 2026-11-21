#include "textrender.h"
#include <SDL_ttf.h>

int init_ttf(void)
{
    const char *word = "Hello, engine!";

    create_window();
    create_renderer();

    TTF_Init();

    TTF_Font *font = TTF_OpenFont("font.ttf", 24);

    SDL_Color color = {255, 255, 255, 255};

    SDL_Surface *text_surface =
    TTF_RenderText_Solid(font, word, color);

    SDL_Texture *text =
    SDL_CreateTextureFromSurface(renderer, text_surface);

    SDL_FreeSurface(text_surface);

    return 0;
}
