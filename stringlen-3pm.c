#include <stdio.h>

int string_length(char string[])
{
    // Start at the beginning of the string
    int length = 0;

    // Check to see if we've reached the terminating '\0'

    while (string[length] != '\0') {
        // if not, move onto the next character

        length++;
    }

    return length;
}

int string_lengthp(char *string)
{
    char *startOfString;

    for (startOfString = string;
         *string++;) // '\0' == 0 == FALSE
        ; // a null statement (does nothing)

    return string - startOfString - 1;
}

int main()
{
    char testString[] = "Friday";

    printf("The string is %d\n", string_lengthp(testString));

    return 0;
}