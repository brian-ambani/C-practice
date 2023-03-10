#include <stdio.h>

int main()
{
	int arr[] = {4,9,7,6,5,8,3,2,1,5};
	int count = 0;
	int to_find = 5;

	for (int i = 0; i < 10; i++ )
	{
		if (arr[i] == to_find)
			count++;
	}

	printf("# of found: %d\n", count);
}
