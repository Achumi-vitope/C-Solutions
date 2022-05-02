#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *link;
};
void insert_node(struct node *head, int newData);
void insert_node2(struct node *head, int newData2);
void current_nodes(struct node *head);
int main()
{
	struct node *head = malloc(sizeof(struct node));
	head->data = 89;
	head->link=NULL;

	struct node *current = malloc(sizeof(struct node));
	current->data=77;
	current->link = NULL;

	head->link=current;

	current = malloc(sizeof(struct node));
	current -> data = 888;
	current->link = NULL;

	head->link->link=current;
	insert_node(head, 778); 
	insert_node2(head, 900);
	current_nodes(head);
}
void insert_node(struct node *head, int newData)
{
	struct node *ptr, *temp; 
	ptr = head;
	temp = malloc(sizeof(struct node));
	temp->data = newData;
	temp->link = NULL;

	while(ptr->link != NULL)
	{
		ptr = ptr->link;
	}

	ptr->link = temp;
	
}

void insert_node2(struct node *head, int newData2)
{
	struct node *new2, *temp2;
	new2 = head;
	temp2 = malloc(sizeof(struct node));

	temp2->data = newData2;
	temp2->link=NULL;

	while(new2->link != NULL)
	{
		new2 = new2 ->link;
	}

	new2->link = temp2;
}
void current_nodes(struct node *head)
{
	int count = 0;
	if(head == NULL)
	{
		printf("Empty linked list");
	}

	struct node *new = NULL;
	new = head;
	while(new != NULL)
	{
		count++;
		printf("\n Data: %d \n", new->data);
		new = new->link;
	}

	printf("\n Traveresed: %d", count);
}

