#include<stdio.h>

#define MAX 100
int arr[MAX];

int display(int size)
{
    printf("Bubble Sorted Elements: \n\n");
    for(int i = 0; i<size; i++)
        printf("%d", arr[i]);
}
int main()
{
    int size, i, j, swap;
    printf("Enter Array Size: \n");
    scanf("%d", &size);

    printf("Enter elements in array[%d]\n", size);
    for(i=0; i<size; i++)
        scanf("%d", &arr[i]);

    for(i=0; i<size-1; i++)
    {
        for(j=0; j<size-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = swap;
            }
        }
    }  

    display(size);
    return 0;
}