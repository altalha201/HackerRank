#include <assert.h>
#include <ctype.h>
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
    long long int d1=0,d2=0;
    scanf("%d",&n);
    int arr[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);

            if(i==j) d1+= arr[i][j];
            if(i== n-j-1) d2+=arr[i][j];
        }
    }
    printf("%d\n",abs(d1-d2));
    return 0;
}
