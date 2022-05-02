#include<stdio.h>

#define MAX 100
int arr[MAX];

int display(int size)
{
    printf("Selection Sorted Elements: \n\n");
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
        for(j=i+1; j<size; j++)
        {
            if(arr[i]>arr[j])
            {
                swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
    }  

    display(size);
    return 0;
}