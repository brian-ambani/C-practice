#include <stdio.h>

int main()
{
	int a[] = {2, 7, 4, 5};
	int *p;
	p = a;

	printf("%p\n", a);
	printf("%p\n", p);
	/* NB: The address of a pointer is not equal to the address the pointer is holding* /
	/*Printing the address of pointer*/
	/* printf("%p\n", &p); */

	printf("%p\n", a + 1);
	printf("%p\n", &a + 1);


	printf("%d\n", *(a + 1));
	printf("%d\n", *a + 1);

}
