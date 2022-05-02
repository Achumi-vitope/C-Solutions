#include<stdio.h>
#define MAX 100
int arr[MAX];

void quicksort(int first,int last){

    int i, j, pivot, temp;

    if(first<last)
    {
        pivot=first;
        i=first;
        j=last;

        while(i<j)
        {
            while(arr[i]<=arr[pivot]&&i<last)
                i++;
            while(arr[j]>arr[pivot])
                j--;
            if(i<j)
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }

            temp=arr[pivot];
            arr[pivot]=arr[j];
            arr[j]=temp;
            quicksort(first,j-1);
            quicksort(j+1,last);

        }

}

int main()
{
    int i, size;

    printf("Enter size for the array: ");
    scanf("%d",&size);

    printf("Enter %d elements: ", size);
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);

    quicksort(0,size-1);

    printf("The Sorted Order is: ");
    for(i=0;i<size;i++)
        printf(" %d",arr[i]);

    return 0;

}