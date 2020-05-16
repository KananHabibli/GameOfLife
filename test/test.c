#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include <stdio.h>
#include "circular.h"
#include "clipped.h"

void circular_test1(void)
{
    int M = 3, N = 3; 
    int** grid;
    int **answer;
    grid = calloc(M,sizeof(int*) );
     
    for(int i = 0; i < M; i++) {
        grid[i] = calloc(N,sizeof(int*) );
    }
    grid[0][0]=1;
    grid[0][1]=1;
    grid[0][2]=1;


    answer = calloc(M,sizeof(int*) );
    for(int i = 0; i < M; i++) {
        answer[i] = calloc(N,sizeof(int*) );
    }


    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {

                answer[i][j]=1;
        }
    }
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {

                CU_ASSERT(nextGenerationcircular(grid,M,N)[i][j] == answer[i][j]);
        }
    }
    free(grid);
    free(answer);
}

void circular_test2(void)
{
    int M = 3, N = 3; 
    int** grid;
    int **answer;
    grid = calloc(M,sizeof(int*) );
     
    for(int i = 0; i < M; i++) {
        grid[i] = calloc(N,sizeof(int*) );
    }
    grid[0][0]=1;
 

    answer = calloc(M,sizeof(int*) );
    for(int i = 0; i < M; i++) {
        answer[i] = calloc(N,sizeof(int*) );
    }

    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {

                CU_ASSERT(nextGenerationcircular(grid,M,N)[i][j] == answer[i][j]);
        }
    }
    free(grid);
    free(answer);
}

void circular_test3(void)
{
    int M = 3, N = 3; 
    int** grid;
    int **answer;
    grid = calloc(M,sizeof(int*) );
     
    for(int i = 0; i < M; i++) {
        grid[i] = calloc(N,sizeof(int*) );
    }
    grid[0][0]=1;
    grid[0][2]=1;


    answer = calloc(M,sizeof(int*) );
    for(int i = 0; i < M; i++) {
        answer[i] = calloc(N,sizeof(int*) );
    }

    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {

                CU_ASSERT(nextGenerationcircular(grid,M,N)[i][j] == answer[i][j]);
        }
    }
    free(grid);
    free(answer);
}

void circular_test4(void)
{
    int M = 3, N = 3; 
    int** grid;
    int **answer;
    grid = calloc(M,sizeof(int*) );
     
    for(int i = 0; i < M; i++) {
        grid[i] = calloc(N,sizeof(int*) );
    }
    grid[0][0]=1;
    grid[1][0]=1;
    grid[2][0]=1;


    answer = calloc(M,sizeof(int*) );
    for(int i = 0; i < M; i++) {
        answer[i] = calloc(N,sizeof(int*) );
    }
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {

                answer[i][j]=1;
        }
    }
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {

                CU_ASSERT(nextGenerationcircular(grid,M,N)[i][j] == answer[i][j]);
        }
    }
    free(grid);
    free(answer);
}

void circular_test5(void)
{
    int M = 3, N = 3; 
    int** grid;
    int **answer;
    grid = calloc(M,sizeof(int*) );
     
    for(int i = 0; i < M; i++) {
        grid[i] = calloc(N,sizeof(int*) );
    }
    grid[0][1]=1;
    grid[1][1]=1;
    grid[2][1]=1;


    answer = calloc(M,sizeof(int*) );
    for(int i = 0; i < M; i++) {
        answer[i] = calloc(N,sizeof(int*) );
    }
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {

                answer[i][j]=1;
        }
    }
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {

                CU_ASSERT(nextGenerationcircular(grid,M,N)[i][j] == answer[i][j]);
        }
    }
    free(grid);
    free(answer);
}

void circular_test6(void)
{
    int M = 3, N = 3; 
    int** grid;
    int **answer;
    grid = calloc(M,sizeof(int*) );
     
    for(int i = 0; i < M; i++) {
        grid[i] = calloc(N,sizeof(int*) );
    }
    grid[0][2]=1;
    grid[1][2]=1;
    grid[2][2]=1;


    answer = calloc(M,sizeof(int*) );
    for(int i = 0; i < M; i++) {
        answer[i] = calloc(N,sizeof(int*) );
    }
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {

                answer[i][j]=1;
        }
    }
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {

                CU_ASSERT(nextGenerationcircular(grid,M,N)[i][j] == answer[i][j]);
        }
    }
    free(grid);
    free(answer);
}
void circular_test7(void)
{
    int M = 3, N = 3; 
    int** grid;
    int **answer;
    grid = calloc(M,sizeof(int*) );
     
    for(int i = 0; i < M; i++) {
        grid[i] = calloc(N,sizeof(int*) );
    }
    grid[1][0]=1;
    grid[1][1]=1;
    grid[1][2]=1;


    answer = calloc(M,sizeof(int*) );
    for(int i = 0; i < M; i++) {
        answer[i] = calloc(N,sizeof(int*) );
    }
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {

                answer[i][j]=1;
        }
    }
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {

                CU_ASSERT(nextGenerationcircular(grid,M,N)[i][j] == answer[i][j]);
        }
    }
    free(grid);
    free(answer);
}
void circular_test8(void)
{
    int M = 3, N = 3; 
    int** grid;
    int **answer;
    grid = calloc(M,sizeof(int*) );
     
    for(int i = 0; i < M; i++) {
        grid[i] = calloc(N,sizeof(int*) );
    }
    grid[2][0]=1;
    grid[2][1]=1;
    grid[2][2]=1;


    answer = calloc(M,sizeof(int*) );
    for(int i = 0; i < M; i++) {
        answer[i] = calloc(N,sizeof(int*) );
    }
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {

                answer[i][j]=1;
        }
    }
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {

                CU_ASSERT(nextGenerationcircular(grid,M,N)[i][j] == answer[i][j]);
        }
    }
    free(grid);
    free(answer);
}

void circular_test9(void)
{
    int M = 3, N = 3; 
    int** grid;
    int **answer;
    grid = calloc(M,sizeof(int*) );
     
    for(int i = 0; i < M; i++) {
        grid[i] = calloc(N,sizeof(int*) );
    }
    grid[0][0]=1;
    grid[2][2]=1;
    grid[0][2]=1;


    answer = calloc(M,sizeof(int*) );
    for(int i = 0; i < M; i++) {
        answer[i] = calloc(N,sizeof(int*) );
    }
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {

                answer[i][j]=1;
        }
    }
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {

                CU_ASSERT(nextGenerationcircular(grid,M,N)[i][j] == answer[i][j]);
        }
    }
    free(grid);
    free(answer);
}

void circular_test10(void)
{
    int M = 3, N = 3; 
    int** grid;
    int **answer;
    grid = calloc(M,sizeof(int*) );
     
    for(int i = 0; i < M; i++) {
        grid[i] = calloc(N,sizeof(int*) );
    }

    answer = calloc(M,sizeof(int*) );
    for(int i = 0; i < M; i++) {
        answer[i] = calloc(N,sizeof(int*) );
    }

    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {

                CU_ASSERT(nextGenerationcircular(grid,M,N)[i][j] == answer[i][j]);
        }
    }

    free(grid);
    free(answer);}


void clipped_test1(void)
{
    int M = 3, N = 3; 
    int** grid;
    int **answer;
    grid = calloc(M,sizeof(int*) );
     
    for(int i = 0; i < M; i++) {
        grid[i] = calloc(N,sizeof(int*) );
    }

    grid[0][0]=1;
    grid[0][1]=1;
    grid[0][2]=1;



    answer = calloc(M,sizeof(int*) );
    for(int i = 0; i < M; i++) {
        answer[i] = calloc(N,sizeof(int*) );
    }
    answer[0][1]=1;
    answer[1][1]=1;
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {

                CU_ASSERT(nextGeneration(grid,M,N)[i][j] == answer[i][j]);
        }
    }
}


void clipped_test2(void)
{
    int M = 3, N = 3; 
    int** grid;
    int **answer;
    grid = calloc(M,sizeof(int*) );
     
    for(int i = 0; i < M; i++) {
        grid[i] = calloc(N,sizeof(int*) );
    }

    grid[1][0]=1;
    grid[1][1]=1;
    grid[1][2]=1;



    answer = calloc(M,sizeof(int*) );
    for(int i = 0; i < M; i++) {
        answer[i] = calloc(N,sizeof(int*) );
    }
    answer[0][1]=1;
    answer[1][1]=1;
    answer[2][1]=1;
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {

                CU_ASSERT(nextGeneration(grid,M,N)[i][j] == answer[i][j]);
        }
    }
}
void clipped_test3(void)
{
    int M = 3, N = 3; 
    int** grid;
    int **answer;
    grid = calloc(M,sizeof(int*) );
     
    for(int i = 0; i < M; i++) {
        grid[i] = calloc(N,sizeof(int*) );
    }

    grid[2][0]=1;
    grid[2][1]=1;
    grid[2][2]=1;



    answer = calloc(M,sizeof(int*) );
    for(int i = 0; i < M; i++) {
        answer[i] = calloc(N,sizeof(int*) );
    }
    answer[2][1]=1;
    answer[1][1]=1;
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {

                CU_ASSERT(nextGeneration(grid,M,N)[i][j] == answer[i][j]);
        }
    }
}
void clipped_test4(void)
{
    int M = 3, N = 3; 
    int** grid;
    int **answer;
    grid = calloc(M,sizeof(int*) );
     
    for(int i = 0; i < M; i++) {
        grid[i] = calloc(N,sizeof(int*) );
    }

    grid[0][0]=1;
    grid[1][0]=1;
    grid[2][0]=1;



    answer = calloc(M,sizeof(int*) );
    for(int i = 0; i < M; i++) {
        answer[i] = calloc(N,sizeof(int*) );
    }
    answer[1][0]=1;
    answer[1][1]=1;
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {

                CU_ASSERT(nextGeneration(grid,M,N)[i][j] == answer[i][j]);
        }
    }
}
void clipped_test5(void)
{
    int M = 3, N = 3; 
    int** grid;
    int **answer;
    grid = calloc(M,sizeof(int*) );
     
    for(int i = 0; i < M; i++) {
        grid[i] = calloc(N,sizeof(int*) );
    }

    grid[0][1]=1;
    grid[1][1]=1;
    grid[2][1]=1;



    answer = calloc(M,sizeof(int*) );
    for(int i = 0; i < M; i++) {
        answer[i] = calloc(N,sizeof(int*) );
    }
    answer[1][0]=1;
    answer[1][1]=1;
    answer[1][2]=1;
    for (int i= 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {

                CU_ASSERT(nextGeneration(grid,M,N)[i][j] == answer[i][j]);
        }
    }
}


void clipped_test6(void)
{
    int M = 3, N = 3; 
    int** grid;
    int **answer;
    grid = calloc(M,sizeof(int*) );
     
    for(int i = 0; i < M; i++) {
        grid[i] = calloc(N,sizeof(int*) );
    }

    grid[0][2]=1;
    grid[1][2]=1;
    grid[2][2]=1;



    answer = calloc(M,sizeof(int*) );
    for(int i = 0; i < M; i++) {
        answer[i] = calloc(N,sizeof(int*) );
    }
    answer[1][1]=1;
    answer[1][2]=1;
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {

                CU_ASSERT(nextGeneration(grid,M,N)[i][j] == answer[i][j]);
        }
    }
}



void clipped_test7(void)
{
    int M = 3, N = 3; 
    int** grid;
    int **answer;
    grid = calloc(M,sizeof(int*) );
     
    for(int i = 0; i < M; i++) {
        grid[i] = calloc(N,sizeof(int*) );
    }

    grid[0][0]=1;
    grid[2][0]=1;
    grid[0][2]=1;



    answer = calloc(M,sizeof(int*) );
    for(int i = 0; i < M; i++) {
        answer[i] = calloc(N,sizeof(int*) );
    }
    answer[1][1]=1;
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {

                CU_ASSERT(nextGeneration(grid,M,N)[i][j] == answer[i][j]);
        }
    }
}



void clipped_test8(void)
{
    int M = 3, N = 3; 
    int** grid;
    int **answer;
    grid = calloc(M,sizeof(int*) );
     
    for(int i = 0; i < M; i++) {
        grid[i] = calloc(N,sizeof(int*) );
    }

    grid[0][2]=1;
    grid[1][2]=1;


    answer = calloc(M,sizeof(int*) );
    for(int i = 0; i < M; i++) {
        answer[i] = calloc(N,sizeof(int*) );
    }

    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {

                CU_ASSERT(nextGeneration(grid,M,N)[i][j] == answer[i][j]);
        }
    }
}



void clipped_test9(void)
{
    int M = 3, N = 3; 
    int** grid;
    int **answer;
    grid = calloc(M,sizeof(int*) );
     
    for(int i = 0; i < M; i++) {
        grid[i] = calloc(N,sizeof(int*) );
    }

    grid[0][2]=1;
 



    answer = calloc(M,sizeof(int*) );
    for(int i = 0; i < M; i++) {
        answer[i] = calloc(N,sizeof(int*) );
    }

    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {

                CU_ASSERT(nextGeneration(grid,M,N)[i][j] == answer[i][j]);
        }
    }
}



void clipped_test10(void)
{
    int M = 3, N = 3; 
    int** grid;
    int **answer;
    grid = calloc(M,sizeof(int*) );
     
    for(int i = 0; i < M; i++) {
        grid[i] = calloc(N,sizeof(int*) );
    }



    answer = calloc(M,sizeof(int*) );
    for(int i = 0; i < M; i++) {
        answer[i] = calloc(N,sizeof(int*) );
    }

    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {

                CU_ASSERT(nextGeneration(grid,M,N)[i][j] == answer[i][j]);
        }
    }
}






int main() {
    CU_initialize_registry();
    CU_pSuite suite = CU_add_suite("circular_test", 0, 0);
    CU_add_test(suite, "circular_test1", circular_test1);
    CU_add_test(suite, "circular_test2", circular_test2);
    CU_add_test(suite, "circular_test3", circular_test3);
    CU_add_test(suite, "circular_test4", circular_test4);
    CU_add_test(suite, "circular_test5", circular_test5);
    CU_add_test(suite, "circular_test6", circular_test6);
    CU_add_test(suite, "circular_test7", circular_test7);
    CU_add_test(suite, "circular_test8", circular_test8);
    CU_add_test(suite, "circular_test9", circular_test9);
    CU_add_test(suite, "circular_test10", circular_test10);
    CU_pSuite suite2 = CU_add_suite("clipped_test", 0, 0);
    CU_add_test(suite2, "clipped_test1", clipped_test1);
    CU_add_test(suite2, "clipped_test2", clipped_test2);
    CU_add_test(suite2, "clipped_test3", clipped_test3);
    CU_add_test(suite2, "clipped_test4", clipped_test4);
    CU_add_test(suite2, "clipped_test5", clipped_test5);
    CU_add_test(suite2, "clipped_test6", clipped_test6);
    CU_add_test(suite2, "clipped_test7", clipped_test7);
    CU_add_test(suite2, "clipped_test8", clipped_test8);
    CU_add_test(suite2, "clipped_test9", clipped_test9);
    CU_add_test(suite2, "clipped_test10", clipped_test10);
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    // test_maxi();
    return 0;
}