//数组交换（两数组大小一样）
#include<stdio.h>
int main()
{
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = {0,2,4,6,8};
	int i = 0;
	int temp = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0; i < sz; i++)
	{
		
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
		/*printf("%d ", arr1[i]);
		printf("%d ", arr2[i]);*/
	}
	return 0;
}