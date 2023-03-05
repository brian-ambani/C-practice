// Delete the last element

#include <stdio.h>

int main()
{
	int a[50], size, i;

	printf("Enter the size of the array:\n");
	scanf("%d", &size);

	printf("Enter the elements of the array:\n");

	for (i = 0; i < size; i++)
	{
		scanf("%d", &a[i]);
	}

	size--;
	printf("The result array:\n");

	for (i = 0; i < size; i++)
	{
		printf("%d\n", a[i]);
	}
	return (0);
}
