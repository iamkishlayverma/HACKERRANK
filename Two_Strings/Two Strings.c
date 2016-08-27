#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,n;
    char s1[10000],s2[10000];
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        unsigned long int a1[123]={0},b1[123]={0};
        int flag=0,l1,l2,j,k,a,b;
        scanf("%s",s1);
        l1 = strlen(s1);
        for(j = 0;j < l1;j++)
        {
            a = s1[j];
            a1[a]++;
        }
        scanf("%s",s2);
        l2 = strlen(s2);
        for(j = 0;j < l2;j++)
        {
            b = s2[j];
            b1[b]++;
        }
        for(k = 97;k < 123;k++)
        {
            if(b1[k] > 0 && a1[k] > 0)
            {
                printf("YES\n");
                flag++;
                break;
            }
        }
        if(flag == 0)
        {
            printf("NO\n");
        }
    }
}
