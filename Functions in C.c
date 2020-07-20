#include <stdio.h>
//#include <algorithm>

int max_of_four (int a, int b, int c, int d)
{
    int largest=0;
    if(a>b && a>c && a>d)
        largest=a;
    else if(b>a && b>c && b>c)
        largest=b;
    else if(c>a && c>b && c>d)
        largest=c;
    else
        largest=d;

    return largest;
}
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    int max_of_four(a,b,c,d);
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
