

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Puzzle B11 -- generate and print N random characters 'a' .. 'z' */

/* Generate a random integer  min <= r <= max */
int randInt(int min, int max)
{
  return rand() % (max - min + 1) + min;
}

/* Generate a random character  'a' .. 'z' */
char randChar()
{
  return 'a' + randInt(0, 25);
}

const int limit = 500;   /* number of characters to generate */

const int groupSize = 6; /* five random chars, followed by a space */
const int lineSize = 60; /* must be N*groupsize */

int main(int argc, char *argv[])
{
  int j, pos;
  char line[lineSize + 1]; /* +1 for the null terminator */

  srand(time(NULL));
  pos = 0;
  for (j = 0; j < limit; j++)
  {
    line[pos] = randChar();
    pos++;

    if (pos == lineSize-1)
    {
      line[lineSize-1] = (char)0;
      printf("%s\n", line);
      pos = 0;
    }
    else if (pos%groupSize == groupSize - 1)
    {
      line[pos] = ' ';
      pos++;
    }

  }

  /* deal with the last, possibly incomplete line */
  if (pos != 0)
  {
    line[pos] = (char)0;
    printf("%s\n", line);
  }

  printf("\n");
  return 0;
}

