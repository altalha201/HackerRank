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
    unsigned long long int a[5],sum=0,max,min;
    scanf("%lld",&a[0]);
    max=a[0];min=a[0];sum+=a[0];

    for(int i=1;i<5;i++) {
        scanf("%lld",&a[i]);
        if(max<a[i]) max=a[i];
        if(min>a[i]) min=a[i];

        sum+=a[i];
    }

    printf("%lld %lld\n",sum-max,sum-min);

    return 0;

}
