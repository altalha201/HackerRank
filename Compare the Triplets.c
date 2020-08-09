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

/*void comp(int *x[3],int *y[3])
{
    int sum_x=0,sum_y=0;

    if(x[0]>y[0]) sum_x++;
    else sum_y++;
    if(x[1]>y[1]) sum_x++;
    else sum_y++;
    if(x[2]>y[2]) sum_x++;
    else sum_y++;

    printf("%d %d\n",sum_x,sum_y);
} */

int main()
{
    int a[3],b[3];
    for(int i=0;i<3;i++) scanf("%d",&a[i]);
    for(int i=0;i<3;i++) scanf("%d",&b[i]);

    //void comp(a,b);
    int sum_x=0,sum_y=0;

    if(a[0]>b[0]) sum_x++;
    else if(a[0]<b[0]) sum_y++;
    if(a[1]>b[1]) sum_x++;
    else if(a[1]<b[1]) sum_y++;
    if(a[2]>b[2]) sum_x++;
    else if(a[2<b[2]]) sum_y++;

    printf("%d %d\n",sum_x,sum_y);

    return 0;
}
