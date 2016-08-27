#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,s,t,x,y,z;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&m,&n,&s);
        if(n>(m-s))
        {
            x=m-s+1;
            y=n-x;
            z=y%m;
            if(z==0)
                printf("%d\n",m);
            else
                printf("%d\n",z);
        }
        else
        {
            z=n+s-1;
            printf("%d\n",z);
        }
    }
    return 0;
}
