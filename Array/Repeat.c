#include <stdio.h>
int main()
{
  int i,j,n,count;
  printf("Enter the no of terms : ");
  scanf("%d",&n);
  int a[n];
  count = 1;
  for(i = 0; i < n; i++)
  {
    printf("Enter the %d element : ",i);
    scanf("%d",&a[i]);
  }
  for(i = 0; i < n; i++)
  {
    for(j = i+1; j < n; j++ )
    {
      if(a[i]==a[j])
      {
      
        count ++;
      }
    }
  }
  printf("The no of repeated terms are %d",count);
}
