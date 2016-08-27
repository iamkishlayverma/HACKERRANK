#include <stdio.h>
#include <stdlib.h>
int d=100005;
int main()
{
    int n,c=0,min,j,k,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<n-1;j++)
    {
        for(k=j+1;k<n;k++)
        {
            if(arr[j]==arr[k])
            {
                min=k-j;
                c=1;
                if(min<d)
                {
                    d=min;
                }
            }
        }
    }
    if(c==0)
        printf("%d",-1);
    else
        printf("%d",d);
    return 0;
}
