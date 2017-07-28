#include<stdio.h>
#define M 5
#define N 5
void main()
{
    int i,j,k,array[M][N];
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            if (i==j)
            {
                array[i][j]=0;
            }
            else
            {
            array[i][j]=-1;
            }
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
