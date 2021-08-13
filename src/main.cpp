#include <iostream>

#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>

#include "kontroller.h"

const char *title = "SDL Minimum";

const int SCREEN_WIDTH = 500;
const int SCREEN_HEIGHT = 400;

int main()
{
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        std::cout << "Could not initialize SDL: " << SDL_GetError() << std::endl;
    }

    SDL_CreateWindow(
        title,
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        SCREEN_WIDTH,
        SCREEN_HEIGHT,
        SDL_WINDOW_SHOWN
    );

    SDL_Delay(2000);

    unique_ptr<Kontroller> k = make_unique<Kontroller>();
    k->run();

    return 0;
}