/*Consider two single dimensional arrays of size 20 and 30 respectively. Write a program in C to find out 
the elements which are common in both arrays.*/

#include <stdio.h>


int main()
{

    int arr1[20], arr2[30], i,j, count = 0, common[30], k = 0;    

    printf("Enter elements into array one: \n");
    for(i=0;i<20;i++)
        scanf("%d",&arr1[i]);
    
    printf("Enter elements into array two: \n");
    for(i=0;i<30;i++)
        scanf("%d",&arr2[i]);
    
    for(i=0; i<20; i++)
    {
        for(j=0; j<30; j++)
        {
            if(arr1[i] == arr2[j])
            {
                count++;
                common[k] = arr2[j];
                k++;
            }
        }
    }

    

    printf("Total common elements: %d\n", count);
    printf("Common element(s) are: \n");
    for(i=0;i<k; i++)
        printf("%d \n", common[i]);
    

}
