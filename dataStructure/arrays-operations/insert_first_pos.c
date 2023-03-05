// insertion at the first position

#include <stdio.h>

int main()
{
	int a[50], size, i, num;

	printf("Enter the sie of the array:\n");

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
	printf("Enter the data you want to insert\n");
	scanf("%d", &num);

	for (i = size -1; i >= 0; i--)
	{
		a[i +1] = a[i];
	}
	a[0] = num;
	size ++;

	printf("Array results: \n");
	for (i = 0; i < size; i++)
		printf("%d\n", a[i]);

	return (0);
}
