#include <stdio.h>
void perfect(int x)
{
  int i;
  int sum =0;
  for(i = 1; i < x; i++)
  {
    if(x % i==0)
      sum +=i;
  }
  if(sum == x)
  printf("It is Perfect number");
  else 
  printf("It is not perfect number");
}
int main()
{
  int n = 6;
  perfect(n);
  return 0;
}

