#include "clipped/clipped.h"
#include "circular/circular.h"
#include "ansi/ansi.h"
void main() 
{ 
    printf("IF YOU WANT CIRCULAR MODE WRITE 2. IF YOU WANT CLIPPED MODE WRITE 1.\n");
    int mode;
    scanf("%d",&mode);
    while(mode!=1 && mode!=2)
    {
        printf("WRONG INPUT, YOU HAVE TO WRITE 1 OR 2\n");
        scanf("%d",&mode);
    }
    int M = 20, N = 20; 
    int** future;
    int **grid;
    grid = malloc(sizeof(int*) * M);
     
    for(int i = 0; i < M; i++) {
        grid[i] = malloc(sizeof(int*) * N);
    }

    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if((i==1 && (j==3 || j==4)) || (i==2 && j==4) || (i==5 && (j==3 || j==4)) || (i==6 && (j==2 || j==3)) ||(i==7 && j==5) ||(i==8 && j==4))
                grid[i][j]=1;
            else
                grid[i][j]=0;
        }
    }



    printf("\033[2J");
    printf("\033[?25l");
    print_generation(grid,M,N);

    printf("\n"); 

    if(mode==1)
    for(int i = 0; i < 5; i++){
        grid = nextGeneration(grid, M, N); 
        sleep(1);
        print_generation(grid,M,N);
    }

    if(mode==2)
    for(int i = 0; i < 5; i++){
        grid = nextGenerationcircular(grid, M, N); 
        sleep(1);
        print_generation(grid,M,N);
    }


} 
