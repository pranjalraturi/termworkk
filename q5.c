#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i;
    printf("Enter the string");
    fgets(str,100,stdin);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c",str[i]);
        }
    }
}
