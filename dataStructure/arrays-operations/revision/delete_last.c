#include <stdio.h>

int main()
{
	int arr[10] = {0,1,2,3,4,5,6,7};
	int i = 0;
	int n = 8;
	printf("The initial array is:\n");
	for (i = 0; i < n; i++)
	{
		printf("Arr[%d] = %d\n", i, arr[i]);
	}
	
	n = n- 1;	
	printf("The new array is:\n");
	for (i = 0; i < n; i++)
	{
		printf("Arr[%d] = %d\n", i, arr[i]);
	}
}
