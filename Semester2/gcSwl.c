//Q Write a program in C to insert element in the kth position of an array size 20

#include <stdio.h>

int main()
{
    int pos, i, size, value, repl =0;

    printf("Enter the no. of elements in array: ");
    scanf("%d", &size);

    int arr[20];
    printf("Enter the elements of size %d: \n", size);

    for(i = 0; i< size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position where you want to insert the element: \n");
    scanf("%d", &pos);

    printf("Enter the value into that position \n");
    scanf("%d", &value);

    for(i = size; i>=pos; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos] = value;
    for(i = 0; i<size+1; i++)
    {
        printf("\n %d \n", arr[i]);
    }
}

