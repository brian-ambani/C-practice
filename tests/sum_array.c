#include <stdio.h>

int main()
{
	int arr[10] = {2,3,8};
	int sum = 0;


	for (int i = 0; i < 10; i++)
	{
		sum = sum + arr[i];
	}
	printf("The sum of the arr is: %d\n", sum);

	return 0;
}
