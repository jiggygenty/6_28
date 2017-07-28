#include<stdio.h>
#define M 10
#define N 4

 void main()
 {
 int array[M][N],i,j,x,newer[M][N],d;

if (M>N)
    d=M;
else
    d=N;
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
        array[i][j]=d - abs(i-j);
        }
    }

    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
          printf("%2d ", array[i][j]);
        }
        printf("\n");
    }
 }
