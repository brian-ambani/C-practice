#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node* next;
}node;

int main()
{
	node *nodeA, *nodeB, *nodeC;
	node *head;

	//Allocating memory
	nodeA = (node*)malloc(sizeof(node));
	nodeB = (node*)malloc(sizeof(node));
	nodeC = (node*)malloc(sizeof(node));

	//Assign values
	nodeA->data = 10;
	nodeB->data = 20;
	nodeC->data = 30;


	// Asign address
	nodeA->next = nodeB;
	nodeB->next = nodeC;
	nodeC->next = NULL;

	// Create a head
	head = nodeA;

	// Create a temporary node
	
	node *temp;
	temp = head;

	// iterating through the list
	
	while (temp != NULL)
	{
		printf("%d\t", temp->data);
		temp = temp->next;
	}
	printf("\n");

	node* new = (node*)malloc(sizeof(node));
	
	new->data = 5;
	new->next = head;

	head = new;
	
	node* temp1;
	temp1 = head;

	printf("\nNew node after insertion At the beginning:\n");

	while (temp1 != NULL)
	{
		printf("%d\t", temp1->data);
		temp1 = temp1->next;
	}
	printf("\n");
	return (0);
}


