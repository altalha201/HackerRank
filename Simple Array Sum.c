#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    int sum_ar=0;

    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        sum_ar+=ar[i];
    }
    printf("%d\n",sum_ar);
    return 0;
}
