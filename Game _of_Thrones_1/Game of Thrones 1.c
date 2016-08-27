#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[100000],b[123]={0};
    int n,i,d,l,j,c=0;
    scanf("%s",s);
    l = strlen(s);
    for(i = 0;i < strlen(s);i++)
    {
        d = s[i];
        b[d]++;
    }
    for(j = 97;j < 123;j++)
    {
        if(b[j]%2 != 0)
        {
            c++;
        }
    }
    if(c > 1)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
}
