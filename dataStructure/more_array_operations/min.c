#include <stdio.h>
/** using the same logic you can 
 * get the max no. in the array
 *
 *
 */

int find_min(int arr[], int length);

int main()
{
	
	int arr1[] = {5,6,7,8,10,7,2,17};
	int arr2[] = {5,8,10,1,2,17};
	
	int min1 = find_min(arr1, 8);
	int min2 = find_min(arr2, 6);

	printf("min1: %d\n", min1);
	printf("min2: %d\n", min2);
	
}


int find_min(int arr[], int length)
{
	int min;
	min = arr[0];

	for (int i = 1; i < length ; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}


