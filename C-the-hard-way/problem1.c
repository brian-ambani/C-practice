#include <stdio.h>
int main()
{
	int arr[] = {1,3,5,7,8};
	int item = 10, k = 3, n = 5;
	int i = 0,j = n;

	printf("The original array elements are:\n");

	for (i = 0; i < n; i++)
		printf("Arr[%d] = %d\n", i, arr[i]);

	n = n +1;
	while (j >= k)
		arr[j + 1] = arr[j];j = j -1;

	arr[k] = item;
	printf("The array elementd after insertion:\n");

	for (i = 0; i < n; i++)
		printf("arr[%d] = %d\n", i, arr[i]);
}
