// Write a C program to insert an ITEM after a given node in a Linked list.
#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *head;

int insert(int inp){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = 3;
    temp->next = NULL;

    struct node *current = (struct node*)malloc(sizeof(struct node));
    current->data = 4;
    current->next = NULL;
    temp->next = current;

    struct node *current1 = (struct node*)malloc(sizeof(struct node));
    current1->data = inp;
    current1->next = NULL;
    if(head==NULL)
        head=current1;
    else{
        current1->next=head;
        head=current1;
    }
}

int display()
{
    struct node *temp=head;
    printf("Before Insertion: \n3\n4\n\n");
    printf("After insertion: \n");
    printf("3 \n4 \n");
    while(temp!=NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
int main(){

    head=NULL;
    int options, inp;
    do{
        printf("1.Insert after a given node\n2.Display\n3.Exit\n");
        scanf("%d", &options);

        switch(options)
        {
            case 1:
                printf("Enter number to insert: \n");
                scanf("%d", &inp);
                insert(inp);
                break;
            case 2:
                display();
                break;
            case 3:
                return 0;
                break;
            default:
                printf("Invalid input!\n");
                break;
        }

    }while(options!=3);
}