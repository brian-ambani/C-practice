#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}node;

int main()
{
	node* head;
	node* sec;
	node* third;

	// allocate 3 nodes in the heap
	head = (struct node*)malloc(sizeof(struct node));
	sec = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));

	// assign data to the nodes
	head->data = 10;
	sec->data = 20;
	third->data = 30;

	// Link first node with sec and sec with third
	head->next = sec;
	sec->next = third;
	third->next = NULL;

	// traversing the node
	struct node* p;
	p = head;

	while (p != NULL)
	{
		printf("%d\n", p->data);
		p = p->next;
	}

	return (0);
}

