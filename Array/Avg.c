#include<stdio.h>
#include <string.h>
float avg(int array[],int n)
{
	int i;
	int sum = 0;
	for(i = 0; i < n ; i++)
	{
		sum += array[i];
	}
	return sum/n;
}
int main()
{
	int N;
	printf("Enter the no of elements : ");
	scanf("%d",&N);
	int arr[N];
	int i;
	for(i = 0 ; i < N; i ++)
	{
		printf("Enter the %d element of the array : ",i);
		scanf("%d",&arr[i]);
	}
	float a = avg(arr,N);
	printf("%f",a);
	
}
