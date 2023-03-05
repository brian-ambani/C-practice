// Delete the first element in an array

#include <stdio.h>

int main()
{
	int a[50], size, i, pos;

	printf("Enter the size of the array\n");
	scanf("%d", &size);

	printf("Enter the elements in the array:\n");

	for (i = 0; i < size; i++)
	{
		scanf("%d", &a[i]);
	}

	// deleting the first element
	for (i = 0; i < size - 1; i++)
	{
		a[0] = a[ i + 1];
	}
	size--;

	printf("The result array:\n");

	for (i = 0; i < size; i++)
	{
		printf("%d\n", a[i]);
	}
	return(0);
}
