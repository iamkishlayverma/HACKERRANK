#include <stdio.h>
#include <stdlib.h>

int main(){
    int d1;
    int m1;
    int y1;
    scanf("%d %d %d",&d1,&m1,&y1);
    int d2;
    int m2;
    int y2;
    scanf("%d %d %d",&d2,&m2,&y2);
    int x,y,z,a;
    if(y2==y1 && m2==m1 && d1>d2)
    {
        x = (d1-d2)*15;
        printf("%d\n",x);
    }
    else if(y2==y1 && m1>m2)
    {
        y = (m1-m2)*500;
        printf("%d\n",y);
    }
    else if(y1>y2)
    {
        z = 10000;
        printf("%d\n",z);
    }
    else
    {
        a = 0;
        printf("%d\n",a);
    }
    return 0;
}
