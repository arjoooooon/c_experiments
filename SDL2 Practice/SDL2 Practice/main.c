
#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>

int main(int argc, char** argv) {
    if( SDL_Init(SDL_INIT_VIDEO) < 0 ) {
        printf("SDL Failed to initialize: %s\n", SDL_GetError());
        return -1;
    }
    
    SDL_Window* window = SDL_CreateWindow("Sample Window",
                                          SDL_WINDOWPOS_CENTERED,
                                          SDL_WINDOWPOS_CENTERED,
                                          680, 480, 0);
    
    if(!window) {
        printf("Failed to initialize window: %s\n", SDL_GetError());
        return -1;
    }
    
    SDL_Surface* windowSurface = SDL_GetWindowSurface(window);
    
    if(!windowSurface) {
        printf("Failed to get window surface: %s\n", SDL_GetError());
        return -1;
    }
    
    SDL_UpdateWindowSurface(window);
    
    SDL_Delay(5000);
    
    SDL_FreeSurface(windowSurface);
    SDL_DestroyWindow(window);
    
    return 0;
}
