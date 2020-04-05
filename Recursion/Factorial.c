#include <stdio.h>
long int fact(int x)
{
	if(x >= 1)
		return x * fact(x-1);
	else
		return 1;
}
int main()
{
	int n = 4;
	printf("%ld",fact(n));
	return 0;
}
