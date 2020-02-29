#include <stdio.h>
#include <stdlib.h>

/*
Write a C program to check a given array (length will be atleast 2 of integers and return true if there are two values 15, 15 next to each other.
*/
int main()
{

    int arr[10];
    int size, pos;


    size = sizeof(arr)/sizeof(arr[0]);

    printf("Enter an array of an integer numbers: ");
    printf("\n-------------------------------------");

    for(int i=0; i<=size-1; i++){
        printf("\nEnter %d number ",i);
        scanf("%d",&arr[i]);
    }

    printf("\n-------------------------------------");
    printf("\nSize of array is %d",size);
    printf("\n-------------------------------------");

    for(int j=0;j<size-1;j++){
        if(arr[j]==15){
            pos = j;
            for(int k=pos;k<size-1;k++){
                if(arr[pos+1]==15){
                    return 1;
                } else{
                    return 0;
                }
            }
        }
    }


}
