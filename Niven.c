#include <stdio.h>
int isNiven(int number)
{
  int i, n, rem;
  int sum = 0;
  n = number;
  while(n != 0)
  {
    rem = n % 10;
    sum += rem;
    n /=10;
  }
  if(number % sum == 0)
    return 1;
  else
    return 0;
}
int main()
{
  int i, check;
  for(i = 100; i < 1000; i++)
  {
    check = isNiven(i);
    if(check == 1)
      printf("%d ",i);

  }
}
