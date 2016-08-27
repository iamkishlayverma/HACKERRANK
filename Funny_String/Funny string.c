#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    char s[10000],r[10000];
    int n,i,a=0,b=0,j,k,p,flag;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        scanf("%s",s);
        flag = 0;
        for(p=0,j = strlen(s)-1;p<strlen(s)-1,j >= 0;p++,j--)
        {
            r[p] = s[j];
        }
        for(k = 1;k < strlen(s)-1;k++)
        {
            a = s[k]-s[k-1];
            b = r[k]-r[k-1];
            if(abs(a) != abs(b))
            {
                printf("Not Funny\n");
                flag++;
                break;
            }
        }
        if(flag==0)
        {
            printf("Funny\n");
        }
    }
    return 0;
}
