#include <stdio.h>
int slen(int n, char a[n])
{
	int i = 0;
	while(a[i] != '\0')
	{
		i++;
	}
	return i;
}
int main()
{
	char a[] = "Sanket";
	printf("%d",slen(5,a));
	
}
