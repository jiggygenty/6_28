#include<stdio.h>
#define M 5
#define N 10

void main()
{
    int array[M][N],i,j,x=0,newer[M][N];
        for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
          array[i][j]=x;
          newer[i][j]=x;
          x++;
        }
    }
        for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
          if (i==0||j==0)
          {
              newer[i][j]=0;
          }
        }
        printf("\n");
    }
    printf("Original:\n");
        for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
          printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    printf("Edge Zeroed:\n");
        for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
          printf("%d ", newer[i][j]);
        }
        printf("\n");
    }
}
