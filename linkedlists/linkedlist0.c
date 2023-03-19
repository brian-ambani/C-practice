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

	return 0;
}
