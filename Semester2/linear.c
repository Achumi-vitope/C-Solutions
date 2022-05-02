//Linear search 
#include<stdio.h>
#define MAX 100

int main()
{
    int arr[MAX];
    int i, size, to_find, place, count;

    printf("Enter the array size: \n");
    scanf("%d", &size);

    printf("Enter elements into array: \n");
    for(i=0; i<size; i++)
        scanf("%d", &arr[i]);

    printf("Enter value to find: \n");
    scanf("%d", &to_find);

    printf("Given elements:");
    for(i=0;i<size;i++)
    {
        if(arr[i]== to_find)
        {
            count = i;
            place = arr[i];
        }
        printf("%d\t", arr[i]);
    }
    if(to_find == place)
    {
        printf("\nFound! Your element: %d\n", to_find);
        printf("\nFound at location %d", count);
    }else{
        printf("Not found!\n");
    }  
}