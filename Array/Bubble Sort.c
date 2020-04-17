#include <stdio.h>
int main()
{
  int i, j, swap, n;
  printf("Enter the no of elements : ");
  scanf("%d",&n);
  int a[n];

  // For input of array

  for(i = 0; i < n; i++)
  {
    printf("Enter the %d element : ",i+1);
    scanf("%d",&a[i]);
  }

 //Calculation
 for(i = 0; i < n; i++)
 {
   for(j = 0; j < n-i-1; j++)
   {
     if(a[j] >= a[j+1])
     {
       swap = a[j];
       a[j] = a[j+1];
       a[j+1] = swap;
     }
   }
 }
  for(i = 0; i < n; i++)
  {
    printf("%d ",a[i]);
  }
  return 0;
}
