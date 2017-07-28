#include<stdio.h>
#define M 2
#define N 5

void main()
{
    int array[M][N],i,j,x=0,newer[M][N];
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

        for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            if(i==0&&j==0)
            {
                newer[M-1][N-1]=array[i][j];
            }
            else
            {
                newer[i][j-1]=array[i][j];
            }

        }
    }
printf("\n");
        for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
          printf("%2d ", newer[i][j]);
        }
        printf("\n");
    }
}
