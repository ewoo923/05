#include <stdio.h>

int main(void)
{
    int count;
    char c;

    printf("Input a string:");
    while ( ( c = getchar() ) != '\n')
    {
        //use "0" "9"
        if ( c >= '0' && c <= '9' )
            count++;
    }

    printf("There are %i digitals!\n", count);

    return 0;
}