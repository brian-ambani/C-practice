#include <stdio.h>

int main()
{
	int a[5], i;
	int *q = a;

	printf("Enter the array elements\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]); // also &(a + i) works
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d\t", a[i]); //also *(q + i) works
	}
	printf("\n");
	return (0);
}
