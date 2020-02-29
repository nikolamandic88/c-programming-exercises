#include <stdio.h>
#include <stdlib.h>
 /*
 Write a C program to check if a given positive number is a multiple of 3 or a multiple of 7
 */
int main()
{
    int number;

    printf("Enter the number: ");
    scanf("%d",&number);

    printf("\n----------------");

    if((number % 3)==0 || (number % 7)==0){
        printf("\nStatement is true.");
    } else {
        printf("\nStatement is not true.");
    }
    return 0;
}
