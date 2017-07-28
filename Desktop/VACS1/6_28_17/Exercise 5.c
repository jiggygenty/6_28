#include<stdio.h>
#define M 5
#define N 10
#define MOVE 13

void main()
{
    int *temp,i,j,y[M][N];
    int x=0;

    temp=(int *)malloc (MOVE*sizeof(int));
        for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
          y[i][j]=x;
          x++;
        }
    }
    for (i=0;i<MOVE;i++)
        temp[i]=y[0][i];

    for (i=0;i<M*N-MOVE;i++)
        y[0][i]=y[0][i+MOVE];

    for (i=0;i<MOVE;i++)
        y[0][M*N-MOVE+i]=temp[i];

        for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
          printf("%d ", y[i][j]);
        }
        printf("\n");
    }
    free(temp);


}

