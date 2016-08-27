#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,m,i,j,x,t,c=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&n,&m);
        for(j=n;j<=m;j++)
        {
            x=sqrt(j);
            if(j==(x*x))
            {
                c=c+1;
            }
        }
        printf("%d\n",c);
        c=0;
    }
    return 0;
}
