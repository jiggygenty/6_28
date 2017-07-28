#include<stdio.h>
#define nrows 3
#define NUMCOLS 5

void main()
{
  int r, c;     /* indexes to the current array element */
  int j;        /* index into array[] */
  int array[nrows*NUMCOLS];
  int duplicateCount = 0;
  int inRun = 0;
  int x[nrows][NUMCOLS]={{5,5,5,1,3},
                         {1,2,3,0,10},
                         {4,1,9,7,13}};

  /* Copy elements from x[][] to array[] */
  j = 0;
  for ( r=0; r<nrows; r++ )
    for ( c=0; c<NUMCOLS; c++ )
      array[ j++ ] = x[r][c];

  /* Sort the 1D array */
  selectionSort( array, nrows*NUMCOLS );

  /* Scan the 1D array for duplicates */
  for ( j=0; j<nrows*NUMCOLS-1; j++ )
  {
    if ( !inRun && array[j] == array[j+1] )
    {
      inRun = 1;
      duplicateCount += 2 ;
    }
    else if ( inRun && array[j] == array[j+1] )
      duplicateCount++ ;
    else
      inRun = 0;
  }
}
