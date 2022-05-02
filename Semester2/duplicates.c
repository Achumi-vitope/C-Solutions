/* Write a program in C to delete duplicate elements from an array of 20 integers.*/

#include <stdio.h>


int main()
{

    int arr[5], i,j, k, count = 0, pos;
    int size = 5;
 

    printf("Enter elements into array one: \n");
    for(i=0;i<5;i++)
        scanf("%d",&arr[i]);
    
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size;j++)
        {
            if(arr[i] == arr[j])
            {
                for(k=j;k<size; k++)
                {
                    arr[k] = arr[k+1];
                }
                j--;
                size--;
                count++;
            }
            
        }
    }

    printf("New array size: %d\n", size);
    printf("Total duplicates: %d\n", count);

    for(k=0; k<size; k++)
        printf("%d\t", arr[k]);


    

}
