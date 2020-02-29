#include <stdio.h>
#include <stdlib.h>

/*
Write a C program to check two given integers, and return true if one of them is 30 or if their sum is 30.
*/
int main()
{
    int i1, i2;
    int sum;

    printf("Enter first integer: ");
    scanf("%d",&i1);

    printf("\n---------------------");

    printf("\nEnter second integer: ");
    scanf("%d",&i2);

    printf("\n---------------------");

    sum = i1 + i2;

    if(i1==30 || i2==30 || sum==30){
        printf("\nStatement is true.");
    } else {
        printf("\nStatement is not true.");
    }
    return 0;
}
