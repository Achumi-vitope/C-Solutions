#include <stdio.h>
#define MAX 100

int top=-1;
int push(int size);
int pop();
int display();

int stack[MAX];

int main()
{
    int size, i, options; 
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    do
    {
        printf("\n1.Push\n2.Pop\n3.display\n4.Exit\n");
        scanf("%d", &options);

        switch(options)
        {
            case 1:
                push(size);
                break;
            case 2:
                pop();
                break;
            case 3:
                display(size);
                break;
            case 4:
                return 0;
                break;
            default:
                printf("Invalid Input");
        }
    }while(options!=4);
}

int push(int size)
{
    if(top == size-1)
    {
        printf("Condition Overflow\n");
        return 0;
    }

    top = top + 1;
    printf("Enter data to push\n");
    scanf("%d", &stack[top]);
    printf("\ntop %d", top);
}

int pop()
{
    if(top==-1)
    {
        printf("Condition Over Flow!!\n");
        return 0;
    }
    top = top - 1;
    printf("Poped successfully\n");
}

int display(int size)
{
    int i;
    if(top==-1)
    {
        printf("Condition Underflow\n");
        return 0;
    }
    printf("Displaying present elements: \n\n");
    for(i=0; i<top+1; i++)
    {
        printf("%d\t", stack[i]);
    }
}