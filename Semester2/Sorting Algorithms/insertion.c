#include <stdio.h>
#define MAX 100

int arr[MAX];

int display(int size)
{
    for(int i=0; i<size; i++)
        printf("%d", arr[i]);
}
int main()
{
    int i, j, swap, size, temp;

    printf("Enter Array Size: \n");
    scanf("%d", &size);

    printf("Enter elements in array[%d]\n", size);
    for(i=0; i<size; i++)
        scanf("%d", &arr[i]);

    for(i=1; i<size; i++)
    {
        //5, 3, 5,6
        temp = arr[i];
        j = i-1;
        while((temp<arr[j])&&(j>=0))
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

    display(size);
    return 0;
}