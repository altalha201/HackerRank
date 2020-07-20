#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int Max_and=0;
  int Max_or=0;
  int Max_Xor=0;

  for(int i=1;i<=n;i++)
  {
      for(int j=i+1;j<=n;j++)
      {
          if(((i&j)>Max_and) && ((i&j)<k)) Max_and= i&j;
          if(((i|j)>Max_or) && ((i|j)<k)) Max_or= i|j;
          if(((i^j)>Max_Xor) && ((i^j)<k)) Max_Xor= i^j;
      }
  }
  printf("%d\n%d\n%d\n",Max_and,Max_or,Max_Xor);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
