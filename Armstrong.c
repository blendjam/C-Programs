#include <stdio.h>
int main()
{
  int m1,n1,m2,n2,i,j;
  printf("Enter the dimension of first matrix: ");
  scanf("%d %d",&m1,&n1);
  printf("Enter the dimension of the second matrix: ");
  scanf("%d %d",&m2, &n2);
  int a[m1][n1], b[m2][n2];
  int m[m1][n2];
  if(n1 != m2)
  printf("The multiplication is not possible");
  else
  {
    for(i = 0; i < n1 ; i++)
    {
      for(j = 0; j <n1; j++)
      {
        m[i][j] = 0
        for(k = 0; k < n1; k++)
        { 
          m[i][j] += a[i][k] * b[k][j];
        }
      }
    }
    printf("Result is : ");
    for(i = 0; i < n1; i++)
    {
      for(j = 0; j < n1; j++)
      {
        printf("%d ",m[i][j]);
      }
      printf("\n");
    }
  }

}