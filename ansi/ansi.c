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


	for (int i = 0; i < M; i++) 
    { 
                printf("\033[%d;4H",i+2);
        for (int j = 0; j < N; j++) 
        { 
            if (now[i][j] == 0) 
            { 

                printf("\033[40m  ");
        	}
            else
                { 

                    printf("\033[101m  ");
        	}
        } 
    } 

    printf("\033[?25h");
}
