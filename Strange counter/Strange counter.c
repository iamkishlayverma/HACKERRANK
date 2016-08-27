#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    unsigned long long int t,i,c=0;
    scanf("%llu",&t);
    for(i=0; ;i++)
    {
        c=c+3*pow(2,i);
        if(t<=c)
        {
            printf("%llu",(c-t+1));
            break;
        }
    }
    return 0;
}
