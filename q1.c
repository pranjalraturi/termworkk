#include <stdio.h>
int unique(int,int [],int);
int main()
{
    int n,i;
    int a[100],b[100];
    printf("enter the size of the array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("element- %d: ",i);
        scanf(" %d",&a[i]);
    }
    int k=0;
    for(i=0;i<n;i++)
    {
        if(unique(a[i],a,n))
        {
        b[k++]=a[i];
        }
    }
    printf("The unique elements found in the array are:");
    for(i=0;i<k;i++)
    {
    printf("%d ",b[i]);
    }
}
int unique(int u,int a[],int n)
{
    int i;
    int c=0;
    for(i=0;i<n;i++)
    {
        if(u==a[i])
        {
            c=c+1;
        }
    }
    return c==1;
}
