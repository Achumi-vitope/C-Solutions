//3. Write a program in C to insert an element in the Kth position of an array size 20.

#include <stdio.h>
#define MAX 100

int main()
{
    int i, pos, arr[MAX], size, value;

    printf("Enter array size:\n");
    scanf("%d", &size);

    printf("\nEnter elements into array:\n");
    for(i=0;i<size;i++)
        scanf("%d", &arr[i]);
    
    printf("Your current array: \n");
    for(i=0; i<size; i++)
        printf("%d \t", arr[i]);

    printf("\nEnter the Position you want to access: \n");
    scanf("%d", &pos);
    
    printf("Enter the value you want to replace: \n");
    scanf("%d", &value);

    arr[pos] = value;

    printf("Updated array: \n");
    for(i=0; i<size; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}
