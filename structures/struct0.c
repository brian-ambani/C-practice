#include <stdio.h>
#include <string.h>

struct Books {
	char title[50];
	char author[50];
	char subject[50];
	int book_id;
};

int main()
{
	struct Books Book1; /* Declare Book1 of type Book*/
	struct Books Book2; /* Declare Book2 of type Book*/
	
	/* book 1 specification */
	strcpy(Book1.title, "C programming");
	strcpy(Book1.author, "Nuha Ali");
	strcpy(Book1.subject, "C programming Tutorials");
	Book1.book_id = 64789;

	/* book 1 specification */
	strcpy(Book2.title, "C++ programming");
	strcpy(Book2.author, "Zara Ali");
	strcpy(Book2.subject, "C++ programming Tutorials");
	Book2.book_id = 45789;

	/* print Book1 info */
	printf("Book 1 title: %s\n", Book1.title);
	printf("Book 1 author: %s\n", Book1.author);
	printf("Book 1 subejct: %s\n", Book1.subject);
	printf("Book 1 book_id: %d\n", Book1.book_id);

	/* print Book2 info */
	printf("Book 2 title: %s\n", Book2.title);
	printf("Book 2 author: %s\n", Book2.author);
	printf("Book 2 subejct: %s\n", Book2.subject);
	printf("Book 2 book_id: %d\n", Book2.book_id);

	return (0);
}
