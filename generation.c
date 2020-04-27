#include "generation.h"



int** nextGeneration(int** grid, int M, int N) 
{ 
     int **future;
    future = malloc(sizeof(int*) * M);
     
    for(int i = 0; i < N; i++) {
        future[i] = malloc(sizeof(int*) * N);
    }
    // Looping through every cell in the grid
    for (int l = 0; l <= M - 1; l++) 
    { 
        for (int m = 0; m <= N - 1; m++) 
        { 
            // finding the number of alive neighbours 
            int aliveNeighbours = 0; 
            for (int i = -1; i <= 1; i++) {
                for (int j = -1; j <= 1; j++) {
                    if(l +i < 0 || m + j < 0 || l+ i > M-1 || m+j > N-1) continue;
                    else aliveNeighbours += grid[l + i][m + j];
                }
            }
            // printf("%d\n", aliveNeighbours);
            // Excluding the cell itself 
            aliveNeighbours -= grid[l][m];

            // Any live cell with fewer than two live neighbors dies, as if caused by under population.
            if ((grid[l][m] == 1) && (aliveNeighbours < 2)) future[l][m] = 0; 

            // Any live cell with two or three live neighbors lives on to the next generation.
            else if ((grid[l][m] == 1) && (aliveNeighbours > 3)) future[l][m] = 0; 

            // Any live cell with more than three live neighbors dies, as if by overpopulation.
            else if ((grid[l][m] == 0) && (aliveNeighbours == 3)) future[l][m] = 1; 

            // Any dead cell with exactly three live neighbors becomes a live cell, as if by reproduction.
            else future[l][m] = grid[l][m]; 
        } 
    }

    return future;
} 


void print_generation(int ** now,int M,int N)
{
    // initscr();                                                                       //initializing the screen
    // start_color();                                                               //starting color mode
    // init_pair(1,1,7);
    // init_pair(2,10,1);
    // printf("\033[2J");
    // printf("\033[?25l");

	for (int i = 0; i < M; i++) 
    { 
                printf("\033[%d;4H",i+2);
        for (int j = 0; j < N; j++) 
        { 
            if (now[i][j] == 0) 
            { 
            //  attrset(COLOR_PAIR(1));                                     //using the fourth color pair as attribute set
            // printRectangle(i,2*j,1,2); 
                printf("\033[40m  ");
        }
            else
                { 
            //  attrset(COLOR_PAIR(2));                                     //using the fourth color pair as attribute set
            // printRectangle(i,2*j,1,2); 
                    printf("\033[101m  ");
        }

                // printf("\n"); 

        } 
    } 
    // getch();
    printf("\033[?25h");
}
