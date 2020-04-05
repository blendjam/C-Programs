
#include <stdio.h>
int main() 
{
	int i, j, k, n, m;
	m = 1;
	printf("Enter the no of row ");
	scanf("%d",&n);
	for(i = n; i >= 1; i--)
	{
		for(j = 1; j <= i; j++)
		{
			printf(" ");
		}
		for(k=1; k<=m && k<=2*n-1; k++)
		{
			printf("*");
		}
		m=m+2;
	printf("\n");
	}
}
