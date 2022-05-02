//Write a program in C for traverses a Linear Array with a lower bound and upper bound.

#include <stdio.h>
#define MAX 100

int main()
{
    int arr[MAX];
    int i, lowerBound, upperBound, size;


    printf("Enter array size:\n");
    scanf("%d", &size);
    printf("Enter %d positive integers into array:\n", size);
    for(i = 0; i<size; i++)
        scanf("%d", &arr[i]);
    
    printf("Provide an upper bound\n");
    scanf("%d", &upperBound);

    
    printf("Provide a lower bound\n");
    scanf("%d", &lowerBound);

    if(upperBound<lowerBound)
    {
        printf("Invalid");
        return 0;
    }

    printf("Traversing from lower bound %d to upper bound %d \n", lowerBound, upperBound);
    for(i=lowerBound; i<=upperBound; i++)
    {
        printf("%d\n", arr[i]);
    }



}