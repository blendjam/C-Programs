// Binary to Decimal
#include <math.h>
#include <stdio.h>
int todecimal(int num)
{
	int i,rem,sum = 0;
	while(num != 0)
	{
		rem = num %10;
		sum += rem * pow(2,i);
		i++;
		num /= 10;
	}
	return sum;
}
int main()
{
	int bin = 101;
	printf("%d",todecimal(bin));
}
