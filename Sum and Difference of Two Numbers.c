#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float c,d;

    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);

    int sum1=a+b;
    int def1=a-b;
    float sum2=c+d;
    float def2=c-d;

    printf("%d %d\n",sum1,def1);
    printf("%.1f %.1f\n",sum2,def2);

    return 0;
}
