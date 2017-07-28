

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Puzzle B06 -- print N random integers in the range MIN..MAX */
const int limit = 100 ;
const int MIN = 50 ;
const int MAX = 100 ;

/* Generate a random integer  min <= r <= max
|
|  max-min+1 should be no larger than 65535
|
*/
int randInt( int min, int max )
{
  return rand()%(max-min+1) + min ;
}

int main(int argc, char *argv[])
{
  int j, r, count=0 ;

  srand( time(NULL) );

  /* Generate the random numbers */
  for ( j=0; j<limit; j++ )
  {
    r = randInt(MIN, MAX) ;
    if ( r>=MIN && r<=MAX )
      printf("%4d ", r );
    else
      printf("%4d*", r );
    if ( count++%10 == 9 ) printf("\n");
  }

  printf("\n");
  return 0;
}

