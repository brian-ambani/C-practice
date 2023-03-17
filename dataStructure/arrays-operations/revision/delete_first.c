#include <stdio.h>

int main()
{
	int arr[10] = {0,1,2,3,4,5,6,7};

	int i, n = 8;

	printf("The initial array is:\n");

	for (i = 0; i < n; i++)
		printf("Arr[%d] = %d\n", i, arr[i]);

	printf("The updated array is: \n");

	for (i = 0; i < n - 1; i++)
		arr[i] = arr[ i + 1];

	n = n - 1;

	for (i = 0; i < n; i++)
		printf("Arr[%d] = %d\n", i, arr[i]);
}
