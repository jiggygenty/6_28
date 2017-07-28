#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/* Puzzle B15 -- print an N by N square of random dots and stars
*/

/* Generate a random integer  min <= r <= max */
int randInt( int min, int max )
{
  return rand()%(max-min+1) + min ;
}

const int N = 24 ;
const int FREQ = 13; // One character in FREQ is a star

int main(int argc, char *argv[])
{
  int row, col;
  srand( time( NULL ) );

  for ( row=0; row<N; row++ )
  {
    for ( col=0; col<N; col++ )
    {
      if ( randInt( 1, FREQ ) == 1 )
        printf("*");
      else
        printf(".");
    }
    printf("\n");
  }

  printf("\n");
  return 0;
}
