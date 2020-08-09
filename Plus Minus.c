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
    int n;
    scanf("%d",&n);
    int arr[n];
    double sum_p=0.0,sum_n=0.0,sum_z=0.0;

    for (int i=0; i<n; i++) {
        scanf("%d",&arr[i]);

        if(arr[i]>0) sum_p+=1.0;
        else if(arr[i]<0) sum_n+=1.0;
        else sum_z+=1.0;
    }

    printf("%lf\n%lf\n%lf\n",sum_p/(n*1.0),sum_n/(n*1.0),sum_z/(n*1.0));

    return 0;
}
