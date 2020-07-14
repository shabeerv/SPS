#include <stdio.h>

void main()
{
    char c;

    printf("Enter a character:\n");
    scanf("%c", &c);

    printf("The ASCII code of the character '%c' is %d\n", c,c);
}