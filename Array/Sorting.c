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
   for(j = i+1; j < n; j++)
   {
     if(a[i] > a[j])
     {
       swap = a[i];
       a[i] = a[j];
       a[j] = swap;
     }
   }
 }
  for(i = 0; i < n; i++)
  {
    printf("%d ",a[i]);
  }
  return 0;
}
