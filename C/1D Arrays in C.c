#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,sum=0,n1;
    scanf("%d",&n);
    for(int j=0;j<n;j++)
    {
        scanf("%d",&n1);
        sum=sum+n1;
    }
    printf("%d",sum);
    return 0;
}
