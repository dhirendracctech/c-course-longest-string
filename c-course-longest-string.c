#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( int argc, char *argv[] )
{ 
    int longestWordIndex = 1;
    for ( int i = 2; i < argc; i++ )
    {
        if ( strlen(argv[longestWordIndex]) < strlen(argv[i]) )
        {
            longestWordIndex = i;
            puts(argv[longestWordIndex]);
        }
        else
        {
            puts("");
        }
    }
    return EXIT_SUCCESS;
}