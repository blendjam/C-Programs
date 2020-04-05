// Fibonaccie for recursion
#include <stdio.h>
int fibo(int x)
{
	if(x == 0 || x ==1)
		return 1;
	else 
	return fibo(x - 1) + fibo(x - 2);
}
int main()
{
	int n = 10;
	int i;
	for(i = 0; i <= n ; i++)
	{
		printf("%d \n",fibo(i));
	}
}
