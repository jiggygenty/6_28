

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Puzzle B03 -- print random integers in the range 0..9
|
|
*/

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
  else
    seed = time(NULL) ;

  /* Initialize the random number generator */
  srand( seed );

  for ( j=0; j<limit; j++ )
  {
    printf("%6d\n", rand()%10 );
  }

  printf("\n");
  return 0;
}
