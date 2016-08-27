#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[10000],b[10000];
    int i,j,a1,b1,p=0,k,l1,l2;
    int c[123]={0},d[123]={0};
    scanf("%s",a);
    l1 = strlen(a);
    for(i = 0;i < l1;i++)
    {
        a1 = a[i];
        c[a1]++;
    }
    scanf("%s",b);
    l2 = strlen(b);
    for(j = 0;j < l2;j++)
    {
        b1 = b[j];
        d[b1]++;
    }
    for(k = 97;k < 123;k++)
    {
        if(c[k] != d[k])
        {
            p = p + abs(c[k] - d[k]);
        }
    }
    printf("%d\n",p);
}
