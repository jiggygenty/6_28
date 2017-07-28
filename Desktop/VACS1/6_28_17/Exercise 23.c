
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Puzzle B13 -- generate and print N random sentences.
|
|  The words of each sentence are groups of random characters.
|  Each sentence starts with a capital and ends with a period.
|  Each sentence has at least 1 word and fewer than 8 words.
|  Each word has at between 1 and 10 characters.
|  One-character words never occur next to each other.
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

const int limit = 35 ;
const int maxWordLength = 8;
const int maxSentLength = 8;
const int lineLength = 50;

int main(int argc, char *argv[])
{
  int size, charCount=0;
  int sent, j, min, sentLength;

  /* reserve enough bytes for the max size word, a '.', and a null */
  char word[ maxWordLength+2 ] ;

  srand( time(NULL) );

  for ( sent=0; sent < limit; sent++ )
  {
    /* Pick a length for this sentence. */
    sentLength = randInt( 1, maxSentLength );

    /* Reset the size of the previous word in the sentence. */
    size = 0;

    for ( j=0; j < sentLength; j++ )
    {

      /* One-letter words do not occur together. */
      if ( size==1 )
        min = 2;
      else
        min = 1;

      /* Pick a length for the next word. */
      size = randWord( word, min, maxWordLength ) ;

      /* Capitalize the first word of a sentence .*/
      /* Also capitalize about one word in ten */
      /* of the other words. */
      if ( j==0 || randInt(0, 9) == 0 )
        word[0] -= 'a' - 'A' ;

      /* If this is the last word, end it with a period. */
      if ( j==sentLength-1 )
      {
        word[size]   = '.';
        word[size+1] = '\0' ;
        size++ ;
      }

      /* Lines are less than lineLength characters. */
      if ( size+charCount > lineLength )
      {
        printf("\n");
        charCount = size+1;
      }
      else
      {
        charCount += size+1; /* size+1 new characters in current line */
      }

      /* Print size+1 characters, counting the space */
      printf("%s ", word );

    }
  }

  printf("\n\n");
  return 0;
}
