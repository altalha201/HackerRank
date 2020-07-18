#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch;
    char s[20];
    char sen[30];

    scanf("%c",&ch);
    scanf("%s",&s);
    scanf("\n");
    scanf("%[^\n]%*c",sen);
    //scanf("\n");

    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
