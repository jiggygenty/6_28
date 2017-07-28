

#include <stdio.h>
#include <stdlib.h>

/* Puzzle B05 -- graph a histogram of N random
|                numbers in the range 0..9
|
*/
const int limit = 500 ;
const int maxPlus = 10 ;

int histo[] = {0,0,0,0,0,0,0,0,0,0};

/* Generate the random numbers and histogram them. */
void generate()
{
  int j, r ;

  for ( j=0; j<limit; j++ )
  {
    r = rand()%maxPlus ;
    histo[r]++ ;
  }
}

/* Find the maximum of all the histogram bins */
int findMax()
{
  int j;
  int max = histo[0];

  for ( j=1; j < maxPlus; j++ )
  {
    if ( histo[j] > max )
      max = histo[j];
  }

  return max;
}

/* Plot the histogram */
void plot ( int max )
{
  const int barWidth = 50;
  int j, s;

  for ( j=0; j<maxPlus; j++ )
  {
    printf("%3d (%5d):", j, histo[j] );
    for ( s=0; s<histo[j]*barWidth/max; s++ )
      printf("*");

    printf("\n");
  }
}

int main(int argc, char *argv[])
{
  int max;

  srand( time(NULL) );
  generate();
  max = findMax();
  plot( max );

  system("pause");
  return 0;
}

