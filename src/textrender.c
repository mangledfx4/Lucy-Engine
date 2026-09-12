#include "textrender.h"
#include "window.h"
#include <SDL_ttf.h>
const char *default_font = "font.ttf";

int draw_text(int X, int Y, int width, int height, const char *text, const char *font_file)
{
    TTF_Font *font = TTF_OpenFont(font_file, 24);

    if (!font)
    {
        printf("FONT ERROR: %s\n", TTF_GetError());
        return 1;
    }

    SDL_Color color = {144, 0, 255, 255};

    SDL_Surface *text_surface =
    TTF_RenderText_Solid(font, text, color);

    if (!text_surface)
    {
        printf("SURFACE ERROR: %s\n", TTF_GetError());
        TTF_CloseFont(font);
        return 1;
    }

    SDL_Texture *texture =
    SDL_CreateTextureFromSurface(renderer, text_surface);

    SDL_FreeSurface(text_surface);

    if (!texture)
    {
        printf("TEXTURE ERROR: %s\n", SDL_GetError());
        TTF_CloseFont(font);
        return 1;
    }

    SDL_Rect dest = {
        X,
        Y,
        width,
        height
    };

    SDL_RenderCopy(renderer, texture, NULL, &dest);

    SDL_DestroyTexture(texture);
    TTF_CloseFont(font);

    return 0;
}

void make_window(const char *name)
{
    create_window(name); //makes the show box
    create_renderer(); //makes the show box have braincells
}
