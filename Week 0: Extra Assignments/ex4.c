#include <stdio.h>
#include <stdlib.h>

int stringLength();
void stringReverse();
void stringConcatenation();

void main()
{
    char str[50], str1[50];
    int choice;

    printf("Enter an option\n 1. STRING LENGTH\n 2. STRING CONCATENATION\n 3. STRING REVERSE\n 4. EXIT\n");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter string:\n");
            scanf("%s", str);
            int lengthOfString = stringLength(str);
            printf("Length of string '%s' is %d\n", str, lengthOfString);
            printf("------------------\n");
            main();
        case 2: 
            printf("Enter two strings to:\n");
            scanf("%s", str);
            scanf("%s", str1);
            stringConcatenation(str, str1);
            printf("\nConcated string is: %s\n", str);
            printf("------------------\n");
            main();
        case 3: 
            printf("Enter a string to reverse:\n");
            scanf("%s", str);
            stringReverse(str);
            printf("------------------\n");
            main();
        case 4:
            exit(0);
    } 
}

int stringLength(char str[])
{
    int count = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    //printf("Length of string '%s' is %d\n", str, count);
    return count;
}

void stringConcatenation(char str[], char str1[])
{
    int i, j;
	i = stringLength(str);
	for (j = 0; str1[j] != '\0'; i++, j++) 
    {
		str[i] = str1[j];
	}
	str[i] = '\0';
}

void stringReverse(char str[])
{
    int count, end, i;
    char rev[50]; 

    count = stringLength(str);

    end = count - 1;

    for(i = 0; i<count; i++) 
    { 
        rev[i] = str[end]; end--; 
    }
    
    rev[i] = '\0';
    printf("Reverse of string '%s' is '%s'\n", str, rev);
}