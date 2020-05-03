#include "clipped.h"


/** Creating next generation of the cells in clipped version */
/** Creating next generation of the cells in clipped version...
    @param grid first parameter
    @param M second parameter
    @param N second parameter
    @return next generaion return value
*/
int** nextGeneration(int** grid, int M, int N) 
{ 
     int **future;
    // allocating next generation's array
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
