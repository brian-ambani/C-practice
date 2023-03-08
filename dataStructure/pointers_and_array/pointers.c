#include <stdio.h>

int main()
{
	int b = 10;
	int *p;
	p = &b;

	/*printing the value of b*/
	printf("%d\n", b);
	printf("%d\n", *p);

	/*printing the address of b*/
	printf("%p\n", &b);
	printf("%p\n", p);


	return (0);
}
