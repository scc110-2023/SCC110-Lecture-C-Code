#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    // Allocate me some chars ;)
    int bufLen = 20; // same length as buf initially
    
    char *str = (char *) malloc(sizeof(char) * bufLen); // I don't get reclaimed:
    // strcpy(str, ""); - set to empty string
    str[0] = '\0';   // - or more efficiently just write end of string marker
    char *input;     // used to detect end of file input
    
    // Keep getting input
    do {
        char buf[20];

        // Get input from the user
        input = fgets(buf, 20, stdin /* a virtual file that is the terminal input */);
        
        // If not end of file (input == NULL)
        if (input != NULL) {
            // Do i have enough room to safely concat these strings?

            if (strlen(buf) + strlen(str) > bufLen) {
                printf("That's bad, realloc\n");
                bufLen += 20;
                str = (char *) realloc(str, sizeof(char) * bufLen);
            }

            // Concat the strings (buf into str)
            strcat(str, buf);
        }
    } while (input != NULL);

    printf("String = \"%s\"\n", str);
    printf("bufLen at the end is = %d\n", bufLen);

    free(str);  // free memory when done with it!

    return 0;
}