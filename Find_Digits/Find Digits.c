#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n,t,b,j,k,c=0;
    int a[100]={0};
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        b=n;
        j=0;
        while(b!=0)
        {
            a[j]=b%10;
            b=b/10;
            j++;
        }
        k=j;
        for(j=0;j<k;j++)
        {
            if(a[j]!=0 && n%a[j]==0)
            {
                c=c+1;
            }
        }
        printf("%d\n",c);
        c=0;

    }
    return 0;
}
