// INSERTION SORT

#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of array to be sorted: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of unsorted array : \n");
	for (int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for (int j=1;j<n;j++)
	{
		int temp = arr[j];
		int k = j-1;
		while (k>=0 && arr[k]>temp)
		{
			arr[k+1]=arr[k];
			k--;
		}
		arr[k+1]=temp;
	}
	printf("The sorted array is : \n");
	for (int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
