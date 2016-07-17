#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SDL2/SDL.h>

#include "triangle.h"
int main(void)
{
    SDL_Window *w;
    SDL_Renderer *r;

    SDL_Init(SDL_INIT_VIDEO);
    SDL_CreateWindowAndRenderer(640, 480, 0, &w, &r);

    triangle t = prompt_triangle();

    SDL_RenderClear(r);
    draw_triangle_filled(r, t);

    SDL_RenderPresent(r);
    SDL_Delay(3000);
}
