#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Puzzle B07 -- print N random doubles 0.0 <= d < 1.0 */

double randDouble()
{
  return (double)rand()/((double)RAND_MAX+1);
}

const int limit = 100 ;

int main(int argc, char *argv[])
{
  int j=0 ;
  double r;
  srand( time(NULL) );

  for ( j=0; j < limit; j++ )
  {
    r = randDouble() ;
    printf(" %12.10lf", r );
    if ( j%5 == 4 ) printf("\n"); //CREATES NEW LINE EVERY 5 NUMBERS
  }

  printf("\n");
  return 0;
}
