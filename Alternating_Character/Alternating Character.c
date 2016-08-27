#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[100000];
    int n,i,j;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        int count = 0,l = 0;
        scanf("%s",s);
        l = strlen(s);
        for(j = 0;j < l;j++)
        {
            if(s[j] == s[j+1])
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
}
