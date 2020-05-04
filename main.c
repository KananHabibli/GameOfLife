#include "clipped.h"
#include "circular.h"
#include "ansi.h"
#include "sdl.h"
void main() 
{ 
    printf("IF YOU WANT CIRCULAR MODE WRITE 2 and IF YOU WANT CLIPPED MODE WRITE 1 in ANSI\n");
    printf("IF YOU WANT CIRCULAR MODE WRITE 3 and IF YOU WANT CLIPPED MODE WRITE 4 in SDL\n");

    int mode;
    scanf("%d",&mode);
    /** @brief First, the program will get the mode input to create required mode of the game  */
    /** @warning Acceptable mode inputs are: 1, 2, 3, 4*/
    while(mode!=1 && mode!=2 && mode!=3 && mode!=4)
    {
        printf("WRONG INPUT, YOU HAVE TO WRITE 1 OR 2\n");
        scanf("%d",&mode);
    }
    int M = 40, N = 40; 
    int **grid;
    grid = malloc(sizeof(int*) * M);
     
    for(int i = 0; i < M; i++) {
        grid[i] = malloc(sizeof(int*) * N);
    }

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            grid[i][j]=0;
        }
    }
    // input for GOSPERS GUN
    grid[5][1]=1;
    grid[5][2]=1;
    grid[6][1]=1;
    grid[6][2]=1;
    grid[1][25]=1;
    grid[2][25]=1;
    grid[2][23]=1;
    grid[3][22]=1;
    grid[3][21]=1;
    grid[4][22]=1;
    grid[4][21]=1;
    grid[5][22]=1;
    grid[5][21]=1;
    grid[6][23]=1;
    grid[6][25]=1;
    grid[7][25]=1;
    grid[4][21]=1;
    grid[3][14]=1;
    grid[3][13]=1;
    grid[3][35]=1;
    grid[3][36]=1;
    grid[4][35]=1;
    grid[4][36]=1;
    grid[4][12]=1;
    grid[4][16]=1;
    grid[5][11]=1;
    grid[5][17]=1;
    grid[6][11]=1;
    grid[7][11]=1;
    grid[6][15]=1;
    grid[6][17]=1;
    grid[6][18]=1;
    grid[7][17]=1;
    grid[8][12]=1;
    grid[8][16]=1;
    grid[9][13]=1;
    grid[9][14]=1;


    /** @brief If user chooses the mode 1, the program will create the generation with ansi in clipped version */
    if(mode==1)
    {
    printf("\033[2J");
    printf("\033[?25l");
    print_generation(grid,M,N);

    printf("\n"); 

    for(int i = 0;; i++){
        grid = nextGeneration(grid, M, N); 
        usleep( 100000 );
        print_generation(grid,M,N);
    }
}   /** @brief If user chooses the mode 2, the program will create the generation with ansi in circular version */
    if(mode==2)
    {
    printf("\033[2J");
    printf("\033[?25l");
    print_generation(grid,M,N);

    printf("\n"); 

    for(int i = 0;; i++){
        grid = nextGenerationcircular(grid, M, N); 
        usleep( 100000 );
        print_generation(grid,M,N);
    }
}

int k=1;
printf("GIVE THE THE PIXEL SIZE FOR ONE CELL\n");
scanf("%d",&k);
/** @brief If user chooses the mode 3, the program will create the generation using SDL2 in circular version */
if(mode==3)
{
        if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        fprintf(stderr,"Problem can not init SDL2 \n");
        exit(0);
    }

SDL_Window* window = SDL_CreateWindow("Life",
                                          SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                                          k*M, k*N, SDL_WINDOW_RESIZABLE|SDL_WINDOW_SHOWN);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1,SDL_RENDERER_ACCELERATED|SDL_RENDERER_PRESENTVSYNC);
    assert (renderer != NULL);

// SIMPLE EVENT & DRAWING LOOP
    bool quit = false;
    while (!quit)
    {
        SDL_Event event;
        while (!quit && SDL_PollEvent(&event))
        {
            switch (event.type)
            {
            case SDL_QUIT:
                quit = true;
                break;
            }
        }
        draw_sdl(renderer,grid,M,N,k);
        usleep( 100000 );
        grid = nextGenerationcircular(grid, M, N); 
        SDL_RenderPresent(renderer);
    }
    SDL_Quit();
}

/** @brief If user chooses the mode 4, the program will create the generation using SDL2 in clipped version */
if(mode==4)
{
        if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        fprintf(stderr,"Problem can not init SDL2 \n");
        exit(0);
    }

SDL_Window* window = SDL_CreateWindow("Life",
                                          SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                                          k*M, k*N, SDL_WINDOW_RESIZABLE|SDL_WINDOW_SHOWN);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1,SDL_RENDERER_ACCELERATED|SDL_RENDERER_PRESENTVSYNC);
    assert (renderer != NULL);

// SIMPLE EVENT & DRAWING LOOP
    bool quit = false;
    while (!quit)
    {
        SDL_Event event;
        while (!quit && SDL_PollEvent(&event))
        {
            switch (event.type)
            {
            case SDL_QUIT:
                quit = true;
                break;
            }
        }
        draw_sdl(renderer,grid,M,N,k);
        usleep( 100000 );
        grid = nextGeneration(grid, M, N); 
        SDL_RenderPresent(renderer);
    }
    SDL_Quit();
}
} 


    // input for simkin glider gun
    // grid[1][1]=1;
    // grid[1][2]=1;
    // grid[1][8]=1;
    // grid[1][9]=1;
    // grid[2][1]=1;
    // grid[2][2]=1;
    // grid[2][8]=1;
    // grid[2][9]=1;
    // grid[4][5]=1;
    // grid[4][6]=1;
    // grid[5][5]=1;
    // grid[5][6]=1;
    // grid[10][22]=1;
    // grid[10][23]=1;
    // grid[10][25]=1;
    // grid[10][26]=1;
    // grid[11][21]=1;
    // grid[11][27]=1;
    // grid[12][21]=1;
    // grid[12][28]=1;
    // grid[13][21]=1;
    // grid[13][22]=1;
    // grid[13][23]=1;
    // grid[13][27]=1;
    // grid[14][26]=1;
    // grid[10][31]=1;
    // grid[10][32]=1;
    // grid[11][31]=1;
    // grid[11][32]=1;
    // grid[18][20]=1;
    // grid[18][21]=1;
    // grid[19][20]=1;
    // grid[20][21]=1;
    // grid[20][22]=1;
    // grid[20][23]=1;
    // grid[21][23]=1;

    // input for simkin glider gun
        // grid[10][10]=1;
        // grid[10][11]=1;
        // grid[10][12]=1;



    //input for beacon
    // grid[10][10]=1;
    // grid[10][11]=1;
    // grid[11][10]=1;
    // grid[11][11]=1;
    // grid[12][12]=1;
    // grid[12][13]=1;
    // grid[13][12]=1;
    // grid[13][13]=1;
