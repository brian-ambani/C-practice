// insertion of an element at a specific position in an array

#include <stdio.h>

int main()
{
	int a[50], size, i, num, pos;

	printf("Enter array size");
	if (size > 50)
	{
		printf("Outflow condition");
	}
	else
	{
		scanf("%d", &size);
		printf("Enter element of the array");

		for (i = 0; i < size; i++)
		{
			scanf("%d", &a[i]);
		}
	}
	printf("Enter data u want to insert\n");
	scanf("%d", &num);
	printf("Enter the position\n");
	scanf("%d", &pos);

	for (i = size - 1; i >= pos - 1; i--)
	{
		a[i + 1] = a[i];
	}
	a[pos - 1] = num;
	size++;
	for (i = 0; i < size; i++)
	{
		printf("%d\n", a[i]);
	}
	return(0);
}

