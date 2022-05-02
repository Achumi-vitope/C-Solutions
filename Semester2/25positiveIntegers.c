//1. An array A contains 25 positive integers. Write a program in C which will find out the number of 
//odd and even numbers in that array.

#include <stdio.h>
#define MAX 25

int main()
{
    int arr[MAX];
    int i, oddCount = 0, evenCount = 0;

    printf("Enter 25 positive integers into array:\n");
    for(i = 0; i<MAX; i++)
        scanf("%d", &arr[i]);
    
    //Iterating through the array to find out the even and odd 

    for(i = 0; i<MAX; i++)
    {
        if((arr[i]%2) == 0)//This algorithm is for checking whether the current number at arr[i] position gives a remainder of 0 when divided by 2. The "%" is used for remainder 
        {
            evenCount++;
        }else{
            oddCount++;
        }
    }

    printf("There are %d odd numbers and %d even numbers", oddCount, evenCount);


}