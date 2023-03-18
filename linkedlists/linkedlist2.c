#include <stdio.h>
#include <stdlib.h>

// template for node

struct node
{
	int data;
	struct node* next;
};

int main()
{
	struct node *nodeA, *nodeB, *nodeC;
	struct node *head;

	// Allocate memory
	nodeA = (struct node *)malloc(sizeof(struct node));
	nodeB = (struct node *)malloc(sizeof(struct node));
	nodeC = (struct node *)malloc(sizeof(struct node));


	// Assiging values to the nodes
	
	nodeA -> data = 25;
	nodeB -> data = 35;
	nodeC -> data = 45;

	//Assign address values to the nodes
	
	nodeA -> next = nodeB;
	nodeB -> next = nodeC;
	nodeC -> next = NULL;

	// creating a head
	
	head = nodeA;

	// Create a temporary pointer
	
	struct node *temp;

	temp = head;

	// traversing the linkedlist
	
	while (temp -> next != NULL)
	{
		printf("%d-->", temp->data);
		temp = temp->next;
	}
	printf("%d--->NULL", temp->data);
	printf("\n");

	return (0);
}
