#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Puzzle B12 -- generate and print N random words of random characters
|
|  The words are of random lengths 1 <= len < max and are made of
|  random characters.
|
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

const int limit = 100 ;
const int maxWordLength = 8;
const int lineLength = 50;

int main(int argc, char *argv[])
{
  int size, charCount=0;
  int j;
  char word[ maxWordLength+1 ] ;

  srand( time(NULL) );

  for ( j=0; j < limit; j++ )
  {
    size = randWord( word, 1, maxWordLength ) + 1;

    /* Lines are less than lineLength characters */
    if ( size+charCount > lineLength)
    {
      printf("\n");
      charCount = size;
    }
    else
    {
      charCount += size;
    }
    printf("%s ", word );
  }

  printf("\n\n");
  return 0;
}
