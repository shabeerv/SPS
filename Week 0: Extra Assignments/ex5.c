#include <stdio.h>

void main()
{
    char str[100], str1[100];
    int i;

    printf("Enter a string: \n");
    scanf("%s", str);
    
    for(i = 0; str[i] != '\0'; i++)
    {
        str1[i] = str[i];
    }

    printf("%s\n", str1);
}