#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char sen[1000];
    int count[10];

    scanf("%s", sen);

    int l=strlen(sen);

    for(int j=0;j<10;j++)
    {
        count[j]=0;
    }

    for(int i=0;i<l;i++)
    {
        if(sen[i]=='0') count[0]++;
        else if(sen[i]=='1') count[1]++;
        else if(sen[i]=='2') count[2]++;
        else if(sen[i]=='3') count[3]++;
        else if(sen[i]=='4') count[4]++;
        else if(sen[i]=='5') count[5]++;
        else if(sen[i]=='6') count[6]++;
        else if(sen[i]=='7') count[7]++;
        else if(sen[i]=='8') count[8]++;
        else if(sen[i]=='9') count[9]++;
    }
    for(int j=0;j<10;j++)
    {
        printf("%d ",count[j]);
    }
    printf("\n");

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
