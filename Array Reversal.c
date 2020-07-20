#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x[n],i;

    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",x[i]);
    }
    printf("\n");

    return 0;
}
