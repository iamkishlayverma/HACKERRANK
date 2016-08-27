#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    float a=0,b=0,c=0;
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
        if(arr[arr_i]<0)
            a++;
        if(arr[arr_i]>0)
            b++;
        if(arr[arr_i]==0)
            c++;
    }
    printf("%f\n",(b/n));
    printf("%f\n",(a/n));
    printf("%f\n",(c/n));
    return 0;
}
