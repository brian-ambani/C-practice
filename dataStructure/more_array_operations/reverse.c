#include <stdio.h>


int arr_swap(int arr[], int length);

int main()
{
	int arr1[] = {1,2,3,4,5,6,7,8,9,10};
	int arr2[] = {10,9,8,7,6,5,4,3,2,1,0};

	arr_swap(arr1, 10);
	arr_swap(arr2, 11);


	for (int i = 0; i < 10; i++)
		printf("Array[%d] = %d\n", i, arr1[i]);

	printf("\n");

	for (int i = 0; i < 11; i++)
		printf("Array[%d] = %d\n",i, arr2[i]);
}


int arr_swap(int arr[], int length)
{

	int temp = 0;

	for (int i = 0; i < (length / 2); i++)
	{
		temp = arr[i];
		arr[i] = arr[length - i - 1];
		arr[length - i -1] = temp;
	}

}
