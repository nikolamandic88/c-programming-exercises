#include <stdio.h>
#include <stdlib.h>

/*
Write a C program to shift an element in left direction and return a new array.
*/
int main()
{
    int arr1[5], size1, size2;

    printf("Entering values...\n\n");

    for(int i=0; i<5; i++){
        printf("\nEnter %d value: ",i);
        scanf("%d",&arr1[i]);
    }

    size1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[size1];

    for(int j=0;j<=size1-1;j++){
        arr2[j] = arr1[j+1];
    }
    arr2[size1-1] = arr1[0];

    size2 = sizeof(arr2)/sizeof(arr2[0]);

    printf("\nSecond array: ");
    for(int k=0; k<=size2; k++){
        printf("%d, ",arr2[k]);
    }
    return 0;
}
