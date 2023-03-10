#include <stdio.h>
/* using the same logic you can get the max no. in the array*/

int main()
{
	int arr[] = {5,6,7,8,10,26,16,15,0,2,17,};

	int min;
	min = arr[0];

	for (int i = 0; i < 11; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	printf("%d\n", min);
}

