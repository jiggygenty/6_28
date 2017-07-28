


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/* Puzzle B14 -- generate words of five random characters
|                until the word "hello" occurs
*/

/* Generate a random integer  min <= r <= max */
int randInt( int min, int max )
{
  return rand()%(max-min+1) + min ;
}

/* Generate a random character  'a' .. 'z' */
char randChar()
{
  return 'a' + randInt(0, 25) ;
}

/* Generate a word of random characters of length between
|  minWordSize and maxWordSize. The buffer, word[] must be
|  of length at least maxWordSize+1.
*/
int randWord( char word[], int minWordSize, int maxWordSize )
{
  int size, j;

  /* Pick a size for this word */
  size = randInt( minWordSize, maxWordSize );

  /* fill the word with characters */
  for ( j=0; j < size; j++ )
    word[ j ] = randChar();

  /* put in the null termination */
  word[ size ] = '\0';

  return size;
}

int main(int argc, char *argv[])
{
  int  done=0;
  long count = 0;

  const int wordLength = 5;
  char target[] ="hello" ;
  char word[ wordLength+1 ] ;

  srand( time(NULL) );

  while( !done )
  {
    randWord( word, wordLength, wordLength ) ;
    count++ ;
    if ( strcmp( word, target ) == 0 )
    {
      printf( "\nword = %s, count = %ld\n", word, count );
      done = 1;
    }

    /* Show that the program is running */
    if ( count%5000000 == 0 )
      printf(".\n");
    else if ( count%100000 == 0 )
      printf(".");
  }

  printf("\n");
  return 0;
}
