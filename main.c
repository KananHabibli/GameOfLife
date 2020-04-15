#include <stdio.h>
void nextGeneration(int grid[10][10], int M, int N);
void main() 
{ 
    int M = 10, N = 10; 

    // Intiliazing the grid. 
    int grid[10][10] = { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, 
        { 0, 0, 0, 1, 1, 0, 0, 0, 0, 0 }, 
        { 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 }, 
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, 
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, 
        { 0, 0, 0, 1, 1, 0, 0, 0, 0, 0 }, 
        { 0, 0, 1, 1, 0, 0, 0, 0, 0, 0 }, 
        { 0, 0, 0, 0, 0, 1, 0, 0, 0, 0 }, 
        { 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 }, 
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } 
    }; 

    // Time t generation 
    printf("Original Generation\n"); 
    for (int i = 0; i < M; i++) 
    { 
        for (int j = 0; j < N; j++) 
        { 
            if (grid[i][j] == 0) 
                printf("."); 
            else
                printf("*"); 
        } 
        printf("\n"); 
    } 
    printf("\n"); 
    nextGeneration(grid, M, N); 
} 

// Time t + 1 generation 
void nextGeneration(int grid[10][10], int M, int N) 
{ 
    int future[M][N];
    // Looping through every cell in the grid
    for (int l = 0; l <= M - 1; l++) 
    { 
        for (int m = 0; m <= N - 1; m++) 
        { 
            // finding the number of alive neighbours 
            int aliveNeighbours = 0; 
            for (int i = -1; i <= 1; i++) {
                for (int j = -1; j <= 1; j++) {
                    if(l +1 < 0 || m + j < 0) continue;
                    else aliveNeighbours += grid[l + i][m + j];
                }
            }
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
    printf("Next Generation\n"); 
    for (int i = 0; i < M; i++) 
    { 
        for (int j = 0; j < N; j++) 
        { 
            if (future[i][j] == 0) 
                printf("."); 
            else
                printf("*"); 
        } 
        printf("\n"); 
    } 
} 

