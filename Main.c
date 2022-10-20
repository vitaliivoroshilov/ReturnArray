#include <stdio.h>
#include <stdlib.h>

void returnArray(int *arr, int len)
{
	printf("Your array: ");
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
}

void main()
{
	int length = 0;
	printf("Enter size of array: ");
	scanf_s("%d", &length);
	
	int* a = (int*)malloc(length* sizeof(int));
	printf("Enter values for array: ");
	for (int i = 0; i < length; i++)
		scanf_s("%d", &a[i]);
	
	returnArray(a, length);

	free(a);
}