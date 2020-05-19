#ifndef SDL
#define SDL



#ifdef WIN32
#define WIN32_LEAN_AND_MEAN
#include  <windows.h>
#endif
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <stdint.h>
#include <time.h>
#include <SDL2/SDL.h>
//#include <SDL2/SDL.h> 
//#include <SDL2/SDL_image.h> 
//#include <SDL2/SDL_timer.h> 
void draw_sdl(SDL_Renderer* renderer,int ** grid, int M, int N,int k);



#endif
