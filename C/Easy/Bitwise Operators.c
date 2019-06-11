#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int max_and=0,max_or=0,max_xor=0,temp=0;
  for(int i=1;i<n;i++)
  {
      for(int j=i+1;j<=n;j++)
      {
          temp=i&j;
          if(temp<k && temp>max_and)
          max_and=temp;
          temp=i|j;
          if(temp<k && temp>max_or)
          max_or=temp;
          temp=i^j;
          if(temp<k && temp>max_xor)
          max_xor=temp;
      }
  }
  printf("%d\n%d\n%d",max_and,max_or,max_xor);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
