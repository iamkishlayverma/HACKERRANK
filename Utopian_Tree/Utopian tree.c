#include <stdio.h>

int main(){
    int a0,t,i,j,k,d,b=1;
    scanf("%d",&t);
    for(a0 = 0; a0 < t; a0++)
    {
        int n;
        scanf("%d",&n);
        if(n%2==0)
        {
            d=(n/2);
            for(i=1;i<=d;i++)
            {
                b=b*2;
                b=b+1;
            }
            printf("%d\n",b);
            b=1;
        }
        else
        {
            k=(n/2);
            for(j=1;j<=k;j++)
            {
                b=b*2;
                b++;
            }
            b=b*2;
            printf("%d\n",b);
            b=1;
        }
    }
    return 0;
}
