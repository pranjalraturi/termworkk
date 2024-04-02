#include <stdio.h>
int main()
{
    int a[100][100],max,t;
    int i,j,r,c;
    printf("Enter the no. of rows");
    scanf("%d",&r);
    printf("Enter the no. of columns");
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
        t=1;
        for(i=0;i<c;i++)
        {
            max=0;
            for(j=0;j<r;j++)
            {
                if(max<a[i][j])
                {
                    max=a[i][j];
                }
                
            }
            printf("The maximum element of%d row is:",t);
            printf("%d\n",max);
            t=t+1;
        }
    }
}
