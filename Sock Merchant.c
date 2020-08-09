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
    int n,ar[102],cnt[102]={0},pairs=0;

    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        cnt[ar[i]]++;
    }
    for(int i=0;i<101;i++)
    {
        if(cnt[i]!=0) pairs += cnt[i]/2;
    }
    printf("%d\n",pairs);
    return 0;
}
