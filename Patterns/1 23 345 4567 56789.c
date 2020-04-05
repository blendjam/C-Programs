/*
1
23
345
4567
56789
*/
#include <stdio.h>
int main()
{
	int i,j,k;  
	for(i = 1; i <= 5; i++)
	{
        k = i;
		for(j = 1; j <= i; j++)
		{
            printf("%d ",k);
            k++;
		}
		printf("\n");
	}
}
