#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,i,a,b,p,l,j,k;
    char s[10000];
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        int a1[123]={0},b1[123]={0},m = 0,l = 0;
        scanf("%s",s);
        l = strlen(s);
        if(l%2==0)
        {
            for(j = 0;j < (l/2);j++)
            {
                a = s[j];
                a1[a]++;
            }
            for(k = (l/2);k < l;k++)
            {
                b = s[k];
                b1[b]++;
            }
            for(l = 97;l < 123;l++)
            {
                m = m + abs(b1[l] - a1[l]);
                p = m/2;
            }
            printf("%d\n",p);
        }
        else
        {
            int o = -1;
            printf("%d\n",o);
        }
    }
}
