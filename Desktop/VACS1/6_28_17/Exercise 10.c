

#include <stdio.h>
#include <stdlib.h>

/* Puzzle B01 -- print N random integers */

int main(int argc, char *argv[])
{
  int j;
  int limit = 25;
  unsigned int seed = 132;

  /* Use command line parameters if supplied */
  if ( argc == 3 )
  {
    limit = atoi( argv[1] );
    seed  = atoi( argv[2] );
  }

  /* Initialize the random number generator */
  srand( seed );

  for ( j=0; j < limit; j++ )
  {
    printf("%5d\n", rand() );
  }

  printf("\n");
  system("pause");
  return 0;
}
