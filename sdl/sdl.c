#include "sdl.h"

/**  @brief This functions prints the 2d array with the help of SDL library)
*    @param renderer window to show
*    @param grid  current generation array
*    @param M column
*    @param N row
*/
void draw_sdl(SDL_Renderer* renderer,int ** grid, int M, int N,int k)
{
        /** @brief Clearing windows each time. */
	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
	SDL_RenderClear(renderer);
        /** @brief Color for each pixel. */
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
        					/** @brief To show 1 cell with k*k pixels */
						SDL_RenderDrawPoint(renderer,k*j+x,k*i+xx);
					}
				}

				}
	}
        /** @brief MOUSE INTERACTION */ 
	int x,y;
	if ( SDL_GetMouseState(&x,&y) & SDL_BUTTON(SDL_BUTTON_LEFT) ) 
	{
		SDL_SetRenderDrawColor(renderer, 255,0,0,0);
	 	SDL_RenderDrawPoint(renderer,x,y);
	}
}



