#include <stdio.h>

int main(void)
{
    int num;
    
    printf("Input a integer:");
    scanf("%i", &num);

    if (num > 0)
        printf("Attribute value: %i\n", num);
    else
        printf("Attribute value: %i\n", -num);

    return 0;
}