#include <stdio.h>
int main()
{
    int a[100][100],sum=0;
    int i,j,r,c;
    printf("Enter the no. of rows");
    scanf("%d",&r);
    printf("Enter the no. of rows");
    scanf("%d",&c);
    if(r==c)
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("Enter the element");
                scanf("%d",&a[i][j]);
            }
        }
        printf("The given matrix is\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if (i>j)
                {
                    sum+=a[i][j];
                }
                
            }
        }
    }
    printf("The sum of lower triangular matrix is%d",sum);
}
