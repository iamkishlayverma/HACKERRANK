#include <stdio.h>
#include <stdlib.h>

int main(){
    int t,a0,a;
    unsigned long long int c,d,r,b,w,x,y,z;
    scanf("%d",&t);
    for(a0 = 0; a0 < t; a0++)
        {
        scanf("%llu %llu",&b,&w);
        scanf("%llu %llu %llu",&x,&y,&z);
        if(x + z < y)
        {
            c = b*x + (x+z)*w;
            printf("%llu\n",c);
        }
        else if(y + z < x)
        {
            d = b*(y + z) + w*y;
            printf("%llu\n",d);
        }
        else
        {
            r = b*x + w*y;
            printf("%llu\n",r);
        }
    }
    return 0;
}

