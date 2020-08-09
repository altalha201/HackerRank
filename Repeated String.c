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
    long long int n,count=0,rem,rept,rem_count=0;
    char s[101];

    scanf("%s", s);
    scanf("%lld",&n);

    long long int l=strlen(s);
    rem= n%l;
    rept = n/l;
    for(int i=0;i<l;i++){
        if(s[i]=='a') count++;
        if(s[i]=='a' && i<rem) rem_count++;
    }
    printf("%lld\n",(rept*count)+rem_count);
    return 0;
}
