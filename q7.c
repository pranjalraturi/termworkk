#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],str1[100];
    int i;
    printf("Enter the string");
    fgets(str,100,stdin);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90 || str[i]>=95 && str[i]<=122)
        {
            str1[i]=str[i];
        }
    }
    puts(str1);
    return 0;
}
