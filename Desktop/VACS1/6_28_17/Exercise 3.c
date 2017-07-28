#include<stdio.h>
#define M 5
#define N 5
void main()
{
    int array[M][N],i,j,x=0,temp;
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
          array[i][j]=x;
          x++;
        }
    }

//    for (i=0;i<M;i++)
//    {
//        for(j=0;j<N;j++)
//        {
//           temp=array[i][j];
//           array[i][j]=array[j][i];
//           array[j][i]=temp;
//        }
//    }
printf("Original:\n");
        for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
          printf("%d ", array[i][j]);
        }
        printf("\n");
    }
printf("\nTransposed:\n");
        for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
          printf("%d ", array[j][i]);
        }
        printf("\n");
    }
}
