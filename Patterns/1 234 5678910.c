#include <stdio.h>
int main()
{
        int i,j,k,n,l;
        k=1,l=1;
        printf("Enter no of rows : ");
        scanf("%d",&n);
        for(i=1;i<=n;k=i*3,i++)
        {
                
                for(j=1;j<=k;j++)
                {
                        printf("%d ",l*l);
                        l++;
                     
                }

                printf("\n");
        }
}
