#include <stdio.h>
int main()
{
  int m1,n1,m2,n2,i,j,k;
  printf("Enter the dimension of first matrix: ");
  scanf("%d %d",&m1,&n1);
  printf("Enter the dimension of the second matrix: ");
  scanf("%d %d",&m2, &n2);
  int a[m1][n1], b[m2][n2];
  int m[m1][n2];

  // Input of first martix

  for(i = 0 ; i < m1; i ++)
  {
  		for(j = 0; j < n1; j++)
  		{
  			printf("Enter the %d %d element of matrix 1: ",i,j);
			scanf("%d",&a[i][j]);	
		}
  }
  // Input of second matrix

    for(i = 0 ; i < m2; i ++)
  	{
  		for(j = 0; j < n2; j++)
  		{
  			printf("Enter the %d %d element of matrix 2: ",i,j);
			scanf("%d",&b[i][j]);	
		}
    }
	// Print of first matrix

    for(i = 0; i < m1; i++)
    {
      for(j = 0; j < n1; j++)
      {
        printf("%d ",a[i][j]);
      }
      printf("\n");
    }
    printf("\n");

    //Print of second matrix
    
    for(i = 0; i < m2; i++)
    {
      for(j = 0; j < n2; j++)
      {
        printf("%d ",b[i][j]);
      }
      printf("\n");
    }
    printf("\n");

  //Real Calculation  

  if(n1 != m2)
  printf("The multiplication is not possible");
  else
  {
    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < n1; j++)
        {
            m[i][j] =0;
            for(k =0; k < n1; k++)
            {
                m[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    // Printing of the result

    printf("Result is : \n");
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