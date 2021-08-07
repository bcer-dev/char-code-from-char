#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    // If user inputs more than one character, send 
    // error message, and return 1.
    if (strlen(argv[1]) > 1)
    {
        printf("Input too long...\n");
        return 1;
    }

    // Print out the result to the user.
    int charCode = (int) argv[1][0];
    printf("ASCII Char Code of %c is %i...\n", argv[1][0], charCode);

    return 0;
}