
#include "clipped.h"
#include "circular.h"
#include "ansi.h"
#include "sdl.h"
#include "math.h"
int main() 
{ 
        printf("#########################################################################################################\n");
        printf("#################################      WELCOME TO THE GAME OF LIFE      #################################\n");
        printf("#########################################################################################################\n\n\n");

        printf("*********************************************************************************************************\n");
        printf("*IF YOU WANT CLIPPED MODE WRITE \"clippedansi\" and IF YOU WANT CIRCULAR MODE WRITE \"circularansi\" in ANSI*\n");
        printf("*********************************************************************************************************\n");
        printf("*IF YOU WANT CLIPPED MODE WRITE \"clippedsdl\" and IF YOU WANT CIRCULAR MODE WRITE \"circularsdl\" in SDL*\n");
        printf("********************************************************************************************************************************************\n");
        printf("*IF YOU WANT CLIPPED MODE WRITE \"clippedsdlcustom\" and IF YOU WANT CIRCULAR MODE WRITE \"circularsdlcustom\" in SDL WITH CUSTOM CONFIGURATION*\n");
        printf("********************************************************************************************************************************************\n\n");
        printf("\n\n**************    YOUR INPUT    **************\n");


    char* mode;
    mode = calloc(1024, sizeof(char));
    scanf("%s",mode);
        printf("**********************************************\n");
    int pause = 5;
    /** @brief Program will get the mode input to create required mode of the game  */
    /** @warning Acceptable mode inputs are: clippedansi, circularansi, clippedsdl, clippedsdl, clippedsdlcustom or the circularsdlcustom */
    while((strcmp(mode,"clippedansi")!=0 && strcmp(mode,"circularansi")!=0 && strcmp(mode,"clippedsdl")!=0 && strcmp(mode,"circularsdl")!=0) && strcmp(mode,"clippedsdlcustom")!=0 && strcmp(mode,"circularsdlcustom")!=0 || strlen(mode)>20)
    {
        printf("\n\n\n#############################\n");
        printf("#####    WRONG INPUT    ####\n");
        printf("#############################\n");

        printf("*********************************************************************************************************\n");
        printf("*IF YOU WANT CLIPPED MODE WRITE \"clippedansi\" and IF YOU WANT CIRCULAR MODE WRITE \"circularansi\" in ANSI*\n");
        printf("*********************************************************************************************************\n");
        printf("*IF YOU WANT CLIPPED MODE WRITE \"clippedsdl\" and IF YOU WANT CIRCULAR MODE WRITE \"circularsdl\" in SDL*\n");
        printf("********************************************************************************************************************************************\n");
        printf("*IF YOU WANT CLIPPED MODE WRITE \"clippedsdlcustom\" and IF YOU WANT CIRCULAR MODE WRITE \"circularsdlcustom\" in SDL WITH CUSTOM CONFIGURATION*\n");
        printf("********************************************************************************************************************************************\n\n");
        printf("\n\n**************    YOUR INPUT    **************\n");
        scanf("%s",mode);
        printf("**********************************************\n");
    }
    /** @brief The size of the grid was taken as 40  */
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


    /** @brief If user chooses the mode clippedansi or circularansi, the program will create the generation with ansi in clipped version or circular version */
    if(strcmp(mode,"clippedansi")==0 || strcmp(mode,"circularansi")==0)
    {
        while(pause>0)
        {
            printf("*******************************************************\n");
            printf("*********    THE GAME BEGINS IN %d seconds    *********\n",pause );
            printf("*******************************************************\n");
            sleep(1);
            pause--;
        }   
    printf("\033[2J");
    printf("\033[?25l");
    print_generation(grid,M,N);

    printf("\n"); 

    for(int i = 0;; i++){
        switch (strcmp(mode,"clippedansi"))
        {
            /** @brief If user chooses the mode clippedansi, the program will create the generation with ansi in clipped version */
            case 0:
            grid = nextGeneration(grid, M, N);
            break;
            /** @brief If user chooses the mode circularansi, the program will create the generation with ansi in circular version */
            default:
            grid = nextGenerationcircular(grid, M, N); 
            break;
        }
        usleep( 100000 );
        print_generation(grid,M,N);
    }
    return 0;
}  


int k=1;
    printf("\n\n**************    GIVE THE THE PIXEL SIZE FOR ONE CELL ( Default is 1)    **************\n");
    scanf("%d",&k);
    printf("****************************************************************************************\n");


/** @brief If user chooses the mode clippedsdl or circularsdl, the program will create the generation using SDL2 in circular version or clipped version*/
if(strcmp(mode,"clippedsdl")==0 || strcmp(mode,"circularsdl")==0)
{  
    printf("\n*******************************************************\n");
    printf("*******    DO NOT CHANGE THE WINDOWS POSITION   *******\n" );
    printf("*******************************************************\n\n\n");
    while(pause>0)
        {
            printf("*******************************************************\n");
            printf("*********    THE GAME BEGINS IN %d seconds    *********\n",pause );
            printf("*******************************************************\n");
            sleep(1);
            pause--;
        }
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
        switch (strcmp(mode,"clippedsdl"))
        {
            /** @brief If user chooses the mode clippedsdl, the program will create the generation using SDL2 in clipped version */
            case 0:
                grid = nextGeneration(grid, M, N); 
                break;
            /** @brief If user chooses the mode circularsdl, the program will create the generation using SDL2 in circular version */
            default:
                grid = nextGenerationcircular(grid, M, N); 
                break;
        }
        SDL_RenderPresent(renderer);
    }
    SDL_Quit();
    return 0;
}

    
    printf("\n\n*********    ENTER THE RESOLUTION OF THE WINDOW    **************\n");
    printf("SIZE OF THE SIDE - ");
    scanf("%d",&M);
    printf("*****************************************************************\n\n");
    M = (int)floor(M/k);
    free(grid);
    grid = (int **)malloc(sizeof(int*) * M);
     
    for(int i = 0; i < M; i++) {
        grid[i] = (int *)malloc(sizeof(int) * M);
    }

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            grid[i][j]=0;
        }
    }

/** @brief If user chooses the mode clippedsdlcustom or circularsdlcustom, the program will create the generation using SDL2 in custom version */
if(strcmp(mode,"clippedsdlcustom")==0 || strcmp(mode,"circularsdlcustom")==0)
{

    printf("****************************************\n");
    printf("*PRESS MOUSE LEFT BUTTON TO DRAW A CELL*\n");
    printf("********************************************\n");
    printf("*PRESS MOUSE RIGHT BUTTON TO ERASE THE CELL*\n");
    printf("************************************************************************************************\n");
    printf("*AFTER FINISING THE DRAW, PRESS MOUSE MIDDLE BUTTON OR CLICK EXIT BUTTON TO BEGIN THE NEXT LIFE*\n");
    printf("************************************************************************************************\n\n");


        while(pause>0)
        {
            printf("*******************************************************\n");
            printf("*********    THE GAME BEGINS IN %d seconds    *********\n",pause );
            printf("*******************************************************\n");
            sleep(1);
            pause--;
        }
        if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        fprintf(stderr,"Problem can not init SDL2 \n");
        exit(0);
    }

    SDL_Window* window = SDL_CreateWindow("Life",
                                          SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                                          k*M, k*M, SDL_WINDOW_RESIZABLE|SDL_WINDOW_SHOWN);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1,SDL_RENDERER_ACCELERATED|SDL_RENDERER_PRESENTVSYNC);
    assert (renderer != NULL);

// SIMPLE EVENT & DRAWING LOOP
    bool quit = false;
    /** @brief To define the cell as alive */
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
        switch (event.button.button){
            case SDL_BUTTON_LEFT:
            grid[(int)floor(event.button.y/k)][(int)floor(event.button.x/k)] = 1;            
            break;
            case SDL_BUTTON_RIGHT:
             grid[(int)floor(event.button.y/k)][(int)floor(event.button.x/k)] = 0;
            break;
            case  SDL_BUTTON_MIDDLE:
                    quit = true;
            break;
        }
        draw_sdl(renderer,grid,M,M,k);
        SDL_RenderPresent(renderer);

    }

    quit = false;
    /** @brief To print all next generation */
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
        switch (strcmp(mode,"clippedsdlcustom"))
        {
        /** @brief If user chooses the mode clippedsdlcustom, the program will create the generation using SDL2 in clipped version with custom configuration */
        case 0:
            grid = nextGeneration(grid, M, M); 
            break;
        /** @brief If user chooses the mode circularsdlcustom, the program will create the generation using SDL2 in circular version with custom configuration */
        default:
            grid = nextGenerationcircular(grid, M, M); 
            break;
        }
        SDL_RenderPresent(renderer);

    }
    SDL_Quit();
}
return 0;
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
