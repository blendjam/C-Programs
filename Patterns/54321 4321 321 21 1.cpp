#include <stdio.h>
int main()
{
	int i, j, k, l=0;
	for(i = 5; i >= 1; i--)
	{
		for(k = 0; k <l; k++)
		{
			printf(" ");
		}
		l++;	
		for(j = i; j >= 1; j--)
		{
			printf("%d", j);
		}
		printf("\n");
	}
}
