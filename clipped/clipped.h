#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/** Creating next generation of the cells in clipped version...
    @param grid first parameter
    @param M second parameter
    @param N second parameter
    @return next generaion return value
*/
int** nextGeneration(int** grid, int M, int N);
void print_generation(int ** now,int M,int N);