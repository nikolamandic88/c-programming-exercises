#include <stdio.h>
#include <stdlib.h>

/*
Write a C program to create new array from a given array of integers shifting all even numbers before all odd numbers.
*/
int main()
{

    int arr1[10], arr2[10], size1, size2;

    size1 = sizeof(arr1)/sizeof(arr1[0]);

    printf("Entering values...\n");

    for(int i=0;i<=size1-1;i++){
        printf("\nEnter %d number: ",i);
        scanf("%d",&arr1[i]);
    }

    for(int j=0; j<=size1-1; j++){
        if(arr1[j]%2==0){
            arr2[j]=arr1[j];
        }
    }

    size2 = sizeof(arr2)/sizeof(arr2[0]);

    for(int k=0;k<=size2-1;k++){
        printf("Second array: %d , ",arr2[k]);
    }
    return 0;
}
