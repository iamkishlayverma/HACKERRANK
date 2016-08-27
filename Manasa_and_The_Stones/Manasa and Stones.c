#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,x,i,j,k,g;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int v[3];
        for(g=0;g<3;g++)
        {
            scanf("%d",&v[g]);
        }
        if(v[1]<v[2])
        {
            x=0;
            for(j=0,k=v[0];j<v[0],k>0;j++,k--)
            {
                x = v[1]*(k-1)+v[2]*j;
                printf("%d\t",x);
            }
            printf("\n");
        }
        else if(v[1]>v[2])
        {
            x=0;
            for(j=0,k=v[0];j<v[0],k>0;j++,k--)
            {
                x = v[2]*(k-1)+v[1]*j;
                printf("%d\t",x);
            }
            printf("\n");
        }
        else
        {
            x=0;
            x = v[2]*(v[0]-1);
            printf("%d\t",x);
            printf("\n");
        }
    }
    return 0;
}
