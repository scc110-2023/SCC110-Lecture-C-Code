#include <stdio.h>

void PrintSymbol(char symbol, int count)
{
    if (count) {
        printf("%c", symbol);

        PrintSymbol(symbol, count - 1);
    }
}

void PrintTriangle(int spaces, int stars)
{
    if (stars > 0) {
        PrintTriangle(spaces + 1, stars - 2);

        PrintSymbol(' ', spaces);
        PrintSymbol('*', stars);
    
        printf("\n");
    }
}


int main()
{
    int height;
    
    printf("Please enter the height of the triangle: ");
    scanf("%d", &height);
    
    PrintTriangle(0, 2 * height - 1);
}