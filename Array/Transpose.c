#include <stdio.h>
void sum(int a[][20],int b[][20],int n, int m)
{
	int i,j;
	int sum[n][20];
	for(i = 0; i < n; i++ )
	{
		for(j = 0; j <20; j++)
		{
			sum[i][j] =	a[i][j]+b[i][j];
		}
	}
	
}
int main()
{
	       int matrix1[10][10], matrix2[10][10];
        int matrix3[10][10], i, j;

        /* get the number of rows and columns from user */
        printf("Enter the no of rows and columns(<=10):");
        scanf("%d%d", &rows, &columns);

        if (rows > 10 || columns > 10) {
                printf("No of rows/columns is greater than 10\n");
                return 0;
        }

        /* input first matrix */
        printf("Enter the input for first matrix:");
        for (i = 0; i < rows; i++) {
                for (j = 0; j < columns; j++) {
                        scanf("%d", &matrix1[i][j]);
                }
        }

        /* input second matrix */
        printf("Enter the input for second matrix:");
        for (i = 0; i < rows; i++) {
                for (j = 0; j < columns; j++) {
                        scanf("%d", &matrix2[i][j]);
                }
        }
        sum(matrix1,matrix2,10,10);
}
