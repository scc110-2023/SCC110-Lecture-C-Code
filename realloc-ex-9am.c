#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // Track how many bytes we've allocated
    int bufLen = 20;

    // Allocate a buffer from the heap
    char *str = (char *) malloc(bufLen * sizeof(char));
    // *str = '\0';
    str[0] = '\0';  // make empty string (copy string terminator into the array)

    do {
        // Get some input from the user into a local var

        char buf[20];

        if (fgets(buf, 20, stdin) == NULL)
            // Jump out of 'do...while' when end of file found (fgets returns NULL)
            break;

        // if there's not enough space, then I will reallocate

        printf("buf was %d bytes, combined string was %d, bufLen was %d\n",
                (int) strlen(buf), (int) (strlen(buf) + strlen(str)), bufLen);

        if (strlen(buf) + strlen(str) > bufLen) {
            // That's bad, realloc
            
            printf("That's bad, buflen was %d reallocating\n", bufLen);
            bufLen += 20;
            str = (char *) realloc(str, bufLen);
        }
        
        // Concatenate buf onto str

        strcat(str, buf);
    } while (1);

    printf("Final string = %s\n", str);
    printf("bufLen = %d\n", bufLen);

    free(str); // free the memory (return to heap)

    return 0;
}
