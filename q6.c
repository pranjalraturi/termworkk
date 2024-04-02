#include <stdio.h>
#include <string.h>
void freq(char []);
int main() {
    char str[100];
    printf("Enter the string: ");
    fgets(str, 100, stdin);
    freq(str);
    return 0;
}
void freq(char str[]) 
{
    int i,j,l,max=0,t=0;
    l=strlen(str);
    for(i=0;i<l;i++) 
    {
        int c=0;
        if(str[i] != '\0') 
        {
            for(j=0;j<l;j++) 
            {
                if(str[i]==str[j]) 
                {
                    c++;
                }
            }
            if (c>max) 
            {
                max=c;
                 t=i;
            }
        }
    }
    printf("The character '%c' has the highest frequency (%d times) in the string.\n", str[t], max);
}
