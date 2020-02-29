#include <stdio.h>
#include <stdlib.h>

/*
Write a C program to create a new array after replacing  all the values 5 with 0 shifting all zeros to right direction
*/
int main()
{
    int arr1[10], arr2[10], size1, size2;

    printf("Entering values....\n");

    for(int i=0; i<10; i++) {
        printf("\nEnter %d value: ",i);
        scanf("%d",&arr1[i]);
    }

    printf("\n\n-----------------------\n\n");

    size1 = sizeof(arr1)/sizeof(arr1[0]);

    for(int j=0; j<=size1; j++){
        if(arr1[j] != 5){
            arr2[j] = arr1[j];
        }
    }

    size2 = sizeof(arr2)/sizeof(arr2[0]);
    printf("Second array is: \t");
    for(int k=0; k<=size2; k++){
        printf("%d , ", arr2[k]);
    }
    return 0;
}
