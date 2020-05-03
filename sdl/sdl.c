#include "sdl.h"


void draw_sdl(SDL_Renderer* renderer,int ** grid, int M, int N,int k)
{
	 SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
	SDL_RenderClear(renderer);
	SDL_SetRenderDrawColor(renderer, 255,255,255,255);
	for(int i=0; i<M; ++i)
	{
		for(int j= 0; j<N; ++j)
			if (grid[i][j]==1)
				{
				for (int x = 0; x < k; x++)
				{
					for (int xx = 0; xx < k; xx++)
					{
						SDL_RenderDrawPoint(renderer,k*j+x,k*i+xx);
					}
				}

				}
	}

	// MOUSE INTERACTION
	int x,y;
	if ( SDL_GetMouseState(&x,&y) & SDL_BUTTON(SDL_BUTTON_LEFT) ) // one & it is for bits AND
	{
	 	// USE COLOR
		SDL_SetRenderDrawColor(renderer, 255,0,0,0);
	 	SDL_RenderDrawPoint(renderer,x,y);
	}
}



