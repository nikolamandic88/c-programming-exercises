#include <stdio.h>
#include <stdlib.h>

/*
Write a C program to check two given integers whether either of them is in the range 100..200
*/
int test(int n, int m){

    if((n>=100 && n<=200) && (m<100 || m>200)){
        return n;
    } else if((n<100 || n>200) && (m>=100 && m<=200)){
        return m;
    } else if((n>=100 && n<=200) && (m>=100 && m<=200)){
        return 1;
    }
    return 0;
}
int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d",&num1);

    printf("Enter second number: ");
    scanf("%d",&num2);

    printf("\n-------------------");

    if(test(num1,num2)==num1){
        printf("\nFirst number is in range.");
    } else if(test(num1,num2)==num2){
        printf("\nSecond number is in range.");
    } else if (test(num1,num2)==1){
        printf("\nBoth numbers are in range.");
    } else if(test(num1,num2)==0){
        printf("\nNeither of them is in range. ");
    }
    return 0;
}
