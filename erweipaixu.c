#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 7
#define M 8

int main(int argc, const char *argv[])
{
    int array[N][M];
    int i = 0;
    int j = 0;
    int temp = 0;
////////////////init/////////////
    srand(time(NULL));
    for (i = 0; i < M*N; i++) 
    {               
        array[0][i]=rand()%(M*N);
    }
///////////////////////////////
////////printf/////////////////
    for (j = 0; j < N; j++) 
    {
        for (i = 0; i < M; i++) 
        {           
            printf("%5d",array[j][i]);
        }
        printf("\n");
    }
    printf("sorted:\n");
    getchar();
///////////////////////////////
////bubble_array///////////
    for (i = 0; i < (M*N-1); i++) 
    {
       for (j = i+1; j < M*N ; j++) 
       {
           if(array[0][i] > array[0][j])
           {
              temp = array[0][i];
              array[0][i] = array[0][j];
              array[0][j] = temp;
           }
       }
    }

   for (j = 0; j < N; j++) 
   {
       for (i = 0; i < M; i++) 
       {
           printf("%5d",array[j][i]);
       }
       printf("\n");
   }
   printf("\n");
   return 0;
}   
