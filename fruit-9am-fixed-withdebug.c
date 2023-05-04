#include <stdio.h>

int main()
{
   int reel[3];

   for (int numReels = 0; numReels < 3; numReels++) {
      int reelValue;

      printf("Enter the value for reel %d ", numReels + 1);

      scanf("%d", &reelValue);
      printf("I read %d\n", reelValue);
      reel[numReels] = reelValue;
      printf("I'm here, numReels %d value is %d\n", numReels,
          reel[numReels]);
   }
}
