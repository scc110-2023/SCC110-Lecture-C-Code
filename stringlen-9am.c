#include <stdio.h>

int string_length(char string[])
{
    // Start at beginning of the string

    int index = 0;

    // Check if we've reached the end
    
    while (string[index] != '\0') {
        // if not, add one to running total        
        // move onto next character
        index++;
    }

    return index;
}

int string_lengthp(char *string)
{
    if (!string)
        return -1;

    // Start at beginning of the string

    char *startOfString = string;
    
    // Check if we've reached the end

    while (*string++)
        ;

    return string - startOfString -1;
}

int main()
{
    char testString[] = "hello";

    printf("Length of string is %d\n", string_lengthp(testString));
}