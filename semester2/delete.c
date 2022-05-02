//replacing an element from an array

//Q Write a program in C to insert element in the kth position of an array size 20

#include <stdio.h>

int main()
{
    int pos, i, size, value, arr[10], repl[10];

    printf("Enter size: \n");
    scanf("%d", &size);

    printf("Enter %d no. of elements: \n", size);

    for(i = 0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to remove: \n");
    scanf("%d", &value);

    for(i = value; i<size; i++)
    {
        arr[i] = arr[i+1]; 
    }
    size--;
    for(i = 0; i<size; i++)
    {
        printf("\n %d",arr[i]);
    }
}

