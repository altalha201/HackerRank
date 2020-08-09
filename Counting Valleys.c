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
    int n,ud=0,res=0;
    scanf("%d",&n);

    char c[n];

    scanf("%s", c);

    for (int i=0; i<n ; i++) {
        if(c[i] == 'U') ud++;
        else ud--;
        if(ud == 0 && c[i] == 'U') res++;
    }
    printf("%d\n",res);
    return 0;
}
