#include <stdio.h>

int ocurrences(int arr[], int length, int to_find);

int main()
{
	int arr1[] = {4,9,7,6,5,8,5,2,1,5};
	int arr2[] = {4,0,7,6,0,8,0,1,0};

	int findarr1_5 = ocurrences(arr1, 10, 5);
	int findarr2_0 = ocurrences(arr2, 9, 0);

	printf("# of 5s in arr1: %d\n", findarr1_5);
	printf("# of 0s in arr1: %d\n", findarr2_0);
}

int ocurrences(int arr[], int length, int to_find)
{
	int count = 0;
	for (int i = 0; i < length; i++ )
		if (arr[i] == to_find)count++;

	return (count);
}
