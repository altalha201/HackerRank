#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,count=0;
    scanf("%d",&n);
    int ar[n];

    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n-1;i++){
        if(ar[i]==0) i++;
        count++;
    }
    printf("%d\n",count);
    return 0;
}
