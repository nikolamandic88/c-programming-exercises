#include <stdio.h>
#include <stdlib.h>

/*
Write a C program to get the absolute difference between n and 51. If n is greater than 51 return triple the absolute difference.
*/
int main()
{
    int n, dif;

    printf("Enter the number: ");
    scanf("%d",&n);
    printf("\n-------------------");

    if(n>51){
        dif = (n-51)*3;
    } else {
        dif = 51 - n;
    }

    printf("\nDifference is: %d",dif);
    return 0;
}
