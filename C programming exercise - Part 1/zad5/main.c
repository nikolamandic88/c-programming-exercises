#include <stdio.h>
#include <stdlib.h>

/*
Write a C program to check which number nearest to the value 100 among two given integers
*/
int test(int n, int m){

    if(abs(n-100) < abs(m-100)){
        return n;
    } else if(abs(n-100) > abs(m-100)){
        return m;
    } else if(n==m){
        return 1;
    }
}
int main()
{
    int first, second;

    printf("Enter first number: ");
    scanf("%d",&first);

    printf("\n------------------");

    printf("\nEnter second number: ");
    scanf("%d",&second);

    if(test(first,second) == first){
        printf("\nThe first number is closer.");
    } else if(test(first,second) == second){
        printf("\nThe second number is closer.");
    } else if (first == second){
        printf("\nNumbers are the same.");
    }
    return 0;
}
