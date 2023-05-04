// Draw a square, live coding, that may go wrong :)

// Ask the user how big a square

#include <stdio.h>

int main()
{
    int size;

    printf("Enter side length: ");
    scanf("%d", &size);

    // loop size times

    int row = 0;

    while (row < size) {
        // draw a row
        int col = 0;
        
        // loop size times
        while (col < size) {
            // print a star '*'
            printf("*");
            col++;
        }
        // new line please
        printf("\n");
        row++;
    }
}