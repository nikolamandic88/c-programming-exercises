#include <stdio.h>
#include <stdlib.h>

/*
Write a C program to create a new array taking the elements after the element value 5 from a given array of integers
*/
int main()
{
    int arr1[10], size1, size2, pos;

    printf("Entering values...\n");

    for(int i=0; i<10; i++){
        printf("\nEnter %d value: ",i);
        scanf("%d",&arr1[i]);
    }

    size1 = sizeof(arr1)/sizeof(arr1[0]);

    int arr2[size1];

    pos = 6;
    for(int j=0; j<= size1; j++){
        arr2[j] = arr1[pos+j];
    }

    size2 = sizeof(arr2)/sizeof(arr2[0]);

    printf("\nSecond array is: ");
    for(int k=0; k<= size2; k++){
        printf("%d, ", arr2[k]);
    }

    return 0;
}
