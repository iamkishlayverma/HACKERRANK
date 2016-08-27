#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,j,x,y,c=0,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    j=arr[0];
    while(j!=(n-1))
    {
        x=j+1;
        y=j+2;
        if(arr[y]==0)
            j=y;
        else if(arr[x]==0 && arr[y]==1)
            j=x;
        c++;
    }
    printf("%d",c);
    return 0;
}
