#include "ansi.h"
/**
 * @brief This function prints the generation that has been passed as a parameter using The ANSI/ISO C Specification Language (ACSL)
 * @param grid  current generation array
 * @param M     column of 2D array
 * @param N     row of 2D array
 * @return void
 */
void print_generation(int ** now, int M, int N)
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