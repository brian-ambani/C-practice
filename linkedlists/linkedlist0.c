#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

int main()
{
	struct node *nodeA, *nodeB, *nodeC;
	struct node *head;

	nodeA = (struct node*)malloc(sizeof(struct node));
	nodeB = (struct node*)malloc(sizeof(struct node));
	nodeC = (struct node*)malloc(sizeof(struct node));

	nodeA->data = 20;
	nodeB->data = 30;
	nodeC->data = 40;

	nodeA -> next = nodeB;
	nodeB -> next = nodeC;
	nodeC -> next = NULL;


	head = nodeA;

	struct node *temp;

	temp = head;

	while (temp != NULL)
	{
		printf("%d\t", temp->data);
		temp = temp->next;
	}
	printf("\n");


	/* Addin at the beginning*/
	printf("ADDING AN ELEMENT TO THE LIST\n");
	
	struct node *new;

	new =  (struct node*)malloc(sizeof(struct node));

	new->data = 50;

	new->next = head;

	head = new;

	struct node *temp0;

	temp0 = head;

	while (temp0 != NULL)
	{
		printf("%d\t", temp0->data);
		temp0 = temp0->next;
	}

	printf("\n");
	/*Adding at the beggining*/



	/* Adding at the end of the list*/
	
	printf("Adding at the End of the list\n");

	struct node* new_end;

	new_end = (struct node*)malloc(sizeof(struct node));

	new_end->data = 70;
	
	nodeC->next = new_end;
	new_end->next = NULL;

	struct node* temp1;
	temp1 = head;

	while (temp1 != NULL)
	{
		printf("%d\t", temp1->data);
		temp1 = temp1->next;
	}

	printf("\n");
	/* Adding at the end of the list*/
	return 0;
}
