// insertion at the end of the array
#include <stdio.h>

int main()
{
	int a[50], size, i, num;

	printf("Enter the size of the array\n");

	if (size > 50)
	{
		printf("Condition overflow");
	}
	else
	{
		scanf("%d", &size);
		printf("Enter the elements of the array\n");

		for (i = 0; i < size; i++)
		{
			scanf("%d", &a[i]);
		}
	}
	printf("Enter the data u want to insert:\n");
	scanf("%d", &num);

	a[size] = num;
	size++;

	printf("The array result: \n");

	for (i = 0; i < size; i++)
	{
		printf("%d\n", a[i]);
	}

}
