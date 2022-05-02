//7. Write a C Program to count the numbers of elements in a linked list
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
} *head;


int insert(int data){
    struct node *temp = NULL;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;

    if(head == NULL)
    {
        head = temp;
    }
    else{
        temp->next = head;
        head = temp;
    }
}

int travers(){
    struct node *temp = head;
    int count = 0;
    while(temp!= NULL)
    {
        temp=temp->next;
        count++;
    }

    printf("Number of linked list: %d\n", count);
}

int main()
{
    head = NULL;
    int option, input;

    do{
        printf("\nSelect one: 1.Insert 2.Count 3.Exit\n");
        scanf("%d", &option);

        switch(option){
            case 1:
                printf("Enter data:\n");
                scanf("%d", &input);
                insert(input);
                break;
            case 2:
                travers();
                break;
            case 3:
                return 0;
                break;
            default:
                printf("Invalid\n");
                break;
        }
    }while(option!=3);

}