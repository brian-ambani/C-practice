// deleting an element at a specific position

#include <stdio.h>

int main()
{
	int a[50], size, i, pos, item;

	printf("Enter the size of the array:\n");
	scanf("%d", &size);

	if (size > 50)
	{
		printf("The array size is greater than the exepected size!\n");
		return(1);
	}
	else
	{
		printf("Enter the elements of the array\n");
		for (i = 0; i < size;i++)
		{
			scanf("%d", &a[i]);
		}
	}
	printf("From which poaition do you want to delete:\n");
	scanf("%d", &pos);

	//printing out the item to be deleted
	item = a[pos-1];
	printf("The element to be deleted is: %d\n", item);

	for (i = pos - 1; i < size - 1; i++)
	{
		a[i] = a[i + 1];
	}
	size--;


	printf("The result array is:\n");

	for (i = 0; i < size; i++)
	{
		printf("%d\n", a[i]);
	}
	return (0);
}
