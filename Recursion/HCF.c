// HCF GCD
#include <stdio.h>
int hcf(int n1, int n2)
{
	if(n2 != 0)
		return hcf(n2,n1 % n2);
	else
		return n1;
}
int main()
{
	int a = 3, b =5;
	printf("%d ",hcf(a,b));
}
