#include <stdio.h>
#include <stdlib.h>
int c=0,t=0;
int main()
{
    int n,t,i,m;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    cut_sticks(a,t);
    return 0;
}
int find_min(int *p,int t)
{
    int i,k;
    int m=p[t];
    for(i=0;i<t;i++)
    {
        for(k=0;k<t;k++)
        {
            if(p[k]!=0 && p[k]<=p[i] && p[k]<=m)
            {
                m=p[k];
            }
        }
    }
    return m;
}
int cut_sticks(int *k,int v)
{
    int x,j,i;
    x = find_min(k,v);
    if(c==1 || t==v)
    {
        return 0;
    }
    else
    {
        c=0;
        for(j=0;j<v;j++)
        {
            if(k[j]>=x && k[j]!=0)
            {
                c=c+1;
                k[j]=k[j]-x;
                if(k[j]==0)
                {
                    t++;
                }
            }
        }

        printf("%d\n",c);
        cut_sticks(k,v);
    }
    printf("\n");
    return 0;
}
