#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    int t,i,a0;
    scanf("%d %d",&n,&t);
    int width[n];
    for(i = 0; i < n; i++){
       scanf("%d",&width[i]);
    }
    for(a0 = 0; a0 < t; a0++){
        int i,j,k;
        int c1=0,c2=0,c3=0;
        scanf("%d %d",&i,&j);
        for(k = i; k <= j; k++)
        {
            if(width[k]==1)
            {
                c1++;
            }
            else if(width[k]==2)
            {
                c2++;
            }
            else
            {
                c3++;
            }
        }
        if(c1>0)
        {
            printf("%d\n",1);
        }
        else if(c1==0 && c2>0)
        {
            printf("%d\n",2);
        }
        else
        {
            printf("%d\n",3);
        }
    }
    return 0;
}
