#include <stdio.h>

void printCrossroads();

int count;

void main() 
{  
    printCrossroads(); 
}

void printCrossroads() 
{ 
    printf("Shabeer\n"); 
    count += 1;

    if(count<8)
        printCrossroads(); 
} 