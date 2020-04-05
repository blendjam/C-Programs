// Fibonacci Series
#include <stdio.h>
int main()
{
	int x,y,z,n;
        printf("Enter the end limit : ");
        scanf("%d", &n);
        x = 0;
        y = 1;
	while(x < n)
	{
                printf("%d \n",x);
                z = x + y;
                x = y;
                y = z;	
	}
}

