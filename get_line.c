#include <stdio.h>

int main()
{
    char inputString[80];

    // NOT SAFE, also stops at a ' '
    scanf("%s", inputString);

    printf("You typed %s of length %d\n", inputString, strlen(inputString));

    // Safer, stops at length specified
    fgets(inputString, sizeof(inputString), stdin);

    printf("You typed %s of length %d\n", inputString, strlen(inputString));

    return 0;
}