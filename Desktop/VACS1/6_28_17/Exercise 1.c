#include<stdio.h>
#define M 4
#define N 4
void main()
{
    int array[M][N],i,j,x=0;
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
          array[i][j]=x;
          x++;
        }
    }

        for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
          printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    x=M*N-1;
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
          array[i][j]=x;
          x--;
        }
    }

        for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
          printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}
