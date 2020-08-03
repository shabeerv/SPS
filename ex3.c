#include <stdio.h>

void main()
{
    char str[100], str1[100];
    int i, flag = 0;

    printf("Enter two strings:\n");
    scanf("%s", str);
    scanf("%s", str1);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == str1[i])
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
        
    }

    if(flag == 1)
    {
        printf("Both strings are same\n");
    }
    else
    {
        printf("Not same!\n");
    }
}