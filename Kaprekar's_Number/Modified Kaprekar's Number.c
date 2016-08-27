#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define round(x) floor((x)+0.5)
int main()
{
    int m,n;
    unsigned long long int i,v,x,b=0,s1,s2,z=0;
    scanf("%d %d",&n,&m);
    for(i = n;i <= m;i++)
    {
        b = 0;
        x = i*i;
        v = i;
        while(v!=0)
        {
            v = v/10;
            b++;
        }
        int a1 = round(pow(10,b));
        s1 = x / a1;
        s2 = x % a1;
        if(s1+s2 == i)
        {
            printf("%llu\t",i);
            z++;
        }
    }
    if(z == 0)
    {
        printf("INVALID RANGE\n");
    }
    return 0;
}
