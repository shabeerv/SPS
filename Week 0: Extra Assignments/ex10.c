#include <stdio.h>

int main()
{
    int limit=4;

    for(int i=1; i<=limit; i++)
    {
        for(int k=1; k<=(limit-i); k++)
        {
            printf(" ");
        }

        for(int j=1; j<=i; j++)
        {
            printf("%c", 64+j);
        }

        for(int j=2; j<=i; j++)
        {
            printf("%c", 64+i-j+1);
        }
        printf("\n");
    }
    return 0;
}