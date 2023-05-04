// draw a square of side length 'n' in '*'s

/*
***
***
***
*/

#include <stdio.h>

int main()
{
    int row = 0;

    // repeat

    while (row < 3) {
        // draw a row
        int col = 0;

        // repeat until we have n
        
        while (col < 3) {
            // draw a character
            printf("*");
            col++;
        }
        
        // goto next line \n

        printf("\n");
        row++;
    }
    // until n rows
}