#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,j=0,i;
    scanf("%d",&n);
    char a[n][n];
    for(i = 0;i <= n-1;i++)
    {
        scanf("%c",&a[i][j]);
        j++;
    }
    //fflush(stdin);
    /*for(i = 0;i <= n-1;i++)
    {
        printf("%d",a[i][j]);
        j++;
    }*/
    puts(a);
    /*for(i = 0;i < n;i++)
    {
        j = 0;
        while(j < n)
        {
            if((i>0 && i<n) && (j>0 && j<n))
            {
                if(a[i][j] < a[i-1][j] && a[i][j] < a[i+1][j] && a[i][j] < a[i][j-1] && a[i][j] < a[i][j+1])
                printf("X");
                j++;
            }
            else
            {
                printf("%d",a[i][j]);
                j++;
            }
            printf("\n");
        }
    }*/
    return 0;
}
