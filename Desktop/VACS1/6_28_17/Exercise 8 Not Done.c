
#include<stdio.h>
#define M 3
#define N 5

void main()
{
    int i,j,k,l;
    int a[10]={0,1,2,3,4,5,6,7,8,9,};
    int array[M][N]={{1,2,3,4,5},
                    {6,7,8,9,10},
                    {11,12,13,14,15}};
    l=0;
    for (i=0;i<M;i++)
    {
        for (j=0;j<N;j++)
        {
//             printf("%d\n",l);

           for (k=0;k<10;++k)
           {
               if (array[i][j]!=k)
                {
                l=0;
                }
                else
                {
                l++;
                }

           }
        }
    }
             printf("%d\n",l);

}
