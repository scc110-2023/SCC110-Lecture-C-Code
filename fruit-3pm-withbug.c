#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   int reel[3];

   // Seed random number generator

   srand(time(NULL));

   // Spin each reel (picking symbol 1-4)

   for (int numReels = 0; numReels <= 3; numReels++) {
      printf("Accessing element %d\n", numReels);
      reel[numReels] = rand() % 4 + 1;
   }

   printf("I got to here\n");

   // Print out the reels

   for (int i = 0; i <= 3; i++) {
      printf("Reel %d is %d\n", i + 1, reel[i]);
   }
   printf("About to exit\n");
}
