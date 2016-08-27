#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,j,x,i,p,flag=0,l;
    scanf("%d %d",&n,&k);
    unsigned long long int arr[n],b[n];
    for(l=0;l<k;l++)
    {
        b[l]=0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%llu",&arr[i]);
        if(arr[i]%k==0)
            flag=1;
        x=arr[i]%k;
        b[x]++;
    }
    p=0;
    for(j=0;j<k;j++)
    {
        printf("%d\t",b[j]);
        if(b[j]>p)
            p=b[j];
    }
    if(flag==1)
        printf("%d",p+1);
    else
        printf("%d",p);
    return 0;
}
