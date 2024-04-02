#include <stdio.h>
int oddeve(int [],int);
int main()
{
    int a[100],i,n;
    
    int t=0,k=0;
    int b[100],c[100];
    printf("Enter the size of the array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("element- %d: ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            b[t]=a[i];
            t++;
        }
        else 
        {
            c[k]=a[i];
            k++;
        }
    }
    printf("the even elements are");
    for(i=0;i<t;i++)
    {
        printf("%d ",b[i]);
    }
    printf("the odd elements are");
    for(i=0;i<k;i++)
    {
        printf("%d ",c[i]);
    }
}
