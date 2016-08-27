#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[100],b[123]={0};
    int n,i,l,c=0,d,k,j;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        scanf("%s",s);
        l = strlen(s);
        for(j = 0;j < l;j++)
        {
            d = s[j];
            if(b[d] == i)
            {
                b[d]++;
            }
        }
    }
    for(k = 97;k < 123;k++)
    {
        if(b[k] == n)
        {
            c++;
        }
    }
    printf("%d\n",c);
}
