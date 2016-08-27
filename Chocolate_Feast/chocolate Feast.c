#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t,a,x,z,a0,b=0;
    scanf("%d",&t);
    for(a0 = 0; a0 < t; a0++){
        int n;
        int c;
        int m;
        int sum=0,sum2=0;
        scanf("%d %d %d",&n,&c,&m);
        x = n/c;
        if(m>x)
        {
            printf("%d\n",x);
        }
        else
        {
            z = x;
            while(z!=0)
            {
                a = z%m;
                sum2 = sum2+a;
                z = z/m;
                sum = sum +z;
            }
            if(sum2+a>=m)
            {
                b = (sum2+a)/m;
                printf("%d\n",x+sum+b);
            }
            else
            printf("%d\n",x+sum);
        }
    }
    return 0;
}
