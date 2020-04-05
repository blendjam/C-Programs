#include <stdio.h>
void swap(int* p1, int* p2)
{
	int term = *p1;
	*p1 = *p2;
	*p2 = term;	
}
int main()
{
	int a = 5;
	int b = 7;
	swap(&a,&b);
	printf("a = %d and b = %d",a,b);
}
