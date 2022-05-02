#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    int roll_no;
    char name[25];
    float avg_no;
    struct student *link;
}*head;

int insert(int roll, char *name, float avg);
int delete(int roll);
int search(int roll);
int update(int roll);
void display();

int main()
{
    head = NULL;
    int roll;
    char name[25];
    float avg;
    int inp;
    if(inp == 6)
    {
        exit(1);
    }
    do
    {
        printf("Please Choose an option: \n");
        printf("1 = Insert\n2 = Delete\n3 = Search\n4 = Update\n5 = Display\n0 = Exit\n");
        scanf("%d", &inp);
        switch(inp)
        {
            case 1:
                printf("Roll Number: ");
                scanf("%d", &roll);

                printf("Name: ");
                scanf("%s", name);

                printf("Average Score: ");
                scanf("%f", &avg);
                insert(roll, name, avg);
                break;

            case 2:
                printf("Enter Roll number to Delete: ");
                scanf("%d", &roll);
                delete(roll);
                break;
            case 3:
                printf("Enter Roll number to Search: ");
                scanf("%d", &roll);
                search(roll);
                break;

            case 4:
                printf("Enter Roll number to Update: ");
                scanf("%d", &roll);
                update(roll);
                break;
            case 5:
                display();
                break;
        }
    }while(inp != 0);
}

int insert(int roll, char*name, float avg)
{
    struct student *pointer = malloc(sizeof(struct student));
    pointer->roll_no = roll;
    strcpy(pointer->name, name);
    pointer->avg_no = avg;
    pointer->link = NULL;

    if(head == NULL)
        head = pointer;
    else{
        pointer->link = head;
        head = pointer;
    }
    free(pointer);
}

void display()
{
    struct student *temp = head;
    printf("\n\nDisplaying elements: \n");
    while(temp!= NULL)
    {
        printf("Name: %s\n", temp->name);
        printf("Average Score: %0.2f\n", temp->avg_no);
        printf("Roll number: %d\n\n\n", temp->roll_no);
        temp = temp->link;
    }
    
}

int delete(int roll)
{
    struct student *temp1 = head;
    struct student *temp2 = head;

    while(temp1 != NULL)
    {
        if(temp1->roll_no == roll)
        {
            printf("Student with roll number %d found\n", roll);
            if(temp1==temp2)
            {
                head = head->link;//check if thep pos is 1
                free(temp1);    
            }else
            {
                temp2->link = temp1->link;
                free(temp1);
            }
            printf("Successfully deleted!! \n");
        }
        temp2 = temp1;
        temp1 = temp1->link;
    }
    printf("No student found with that roll number! \n");
}

int search(int roll)
{
    struct student *temp = head;
    while(temp!= NULL)
    {
        if(temp->roll_no==roll)
        {
            printf("Found! \n");
            printf("Name: %s\n", temp->name);
            printf("Score: %0.2f\n", temp->avg_no);
        }else
        {
            printf("Not found! \n");
        }
        temp = temp->link;
    }
    
}

int update(int roll)
{
    struct student *temp = head;
    while(temp != NULL)
    {
        if(temp->roll_no == roll)
        {
            printf("Found! Proceed to update: \n");
                
            printf("Enter New Name: \n");
            scanf("%s", temp->name);
            printf("Enter New Roll Number: \n");
            scanf("%d", &temp->roll_no);
            printf("Enter New Score: \n");
            scanf("%f", &temp->avg_no);
            printf("Updated Successfully!");
        }else{
            printf("Not found! \n");
        }
        temp = temp->link;
    }
    
}