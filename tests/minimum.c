#include <stdio.h>

int main()
{
	int arr[10] = {3,4,5,6,0,7,8,9};

	int min = arr[0];
	
	for (int i = 1; i < 10; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}

	printf("The min element: %d\n", min);
}
