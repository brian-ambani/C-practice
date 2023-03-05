// traversing an array 

#include <stdio.h>

int main()
{
	int a[50], size, i;

	printf("Enter the size of the array\n");
	scanf("%d", &size);
	printf("Enter elements of array\n");

	for (i = 0; i < size; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Elements of array are:\n");
	for (i = 0; i < size; i++)
	{
		printf("%d\n", a[i]);
	}
	return (0);
}
