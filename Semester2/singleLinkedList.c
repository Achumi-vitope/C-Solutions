/*
.Consider that a single linked list contains the following elements :
.Roll_no. : integer
.Name : string of maximum of 25 Character
.Avg_no : float.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    int Roll_no;
    char Name[25];
    float Avg_no;
    struct node *link;
} *head;

int input(int roll, char *name, float avg){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->Roll_no=roll;
    strcpy(temp->Name, name);
    temp->Avg_no=avg;
    temp->link = NULL;

    if(head==NULL)
        head=temp;
    else{
        temp->link=head;
        head=temp;
    }
}

int display(){
    struct node *temp=head;
    printf("The inserted elements: \n");
    while(temp!=NULL)
    {
        printf("Name: %s\n", temp->Name);
        printf("Roll No: %d\n", temp->Roll_no);
        printf("Average: %0.2f\n", temp->Avg_no);
        temp = temp->link;
    }
}

int main()
{
    head = NULL;
    int option, roll;
    char name[25];
    float avg;

    do{
        printf("What do you want to do?\n");
        printf("1.Insert\n2.Display\n3.Exit\n");
        scanf("%d", &option);

        switch(option){
            case 1:
                printf("Roll NO: ");
                scanf("%d", &roll);
                printf("Name: ");
                scanf("%s", name);
                printf("Average: ");
                scanf("%f", &avg);
                input(roll, name, avg);
                break;
            case 2:
                display();
                break;
            case 3:
                printf("Exiting...\n");
                printf("Exited Successfully!\n");
                return 0;
                break;
        }
    }while(option!=3);
    
}