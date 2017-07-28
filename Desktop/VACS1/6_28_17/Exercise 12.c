#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Puzzle B02 -- determine experimentally how often rand() returns RAND_MAX */
const int N = 1000 ;

int main(int argc, char *argv[])
{
  int i, j;
  int count = 0;

  srand( time(NULL) );

  for ( i=0; i<N; i++ )
    for ( j=0; j<RAND_MAX; j++ )
    {
      if( rand() == RAND_MAX ) count++ ;
    }
  printf("RAND_MAX occured %d times in %d x RAND_MAX trials\n",
          count, N );

  printf("\n");
  return 0;
}


