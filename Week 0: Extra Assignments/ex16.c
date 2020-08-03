#include <stdio.h>

void main()
{
    int nOfStudents, div, totalHandShakes = 0;

    printf("Total Number of students:\n");
    scanf("%d", &nOfStudents);

    div = nOfStudents/2;
    totalHandShakes = nOfStudents*(nOfStudents - 1)/2;

    printf("Total Number of students: %d\n", totalHandShakes);
}