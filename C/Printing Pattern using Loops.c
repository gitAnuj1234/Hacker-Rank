#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int limit,i,j;
    limit=n+n-1;
    int result[limit][limit];
    result[n-1][n-1]=1;
    for(i=2;i<=n;i++)
    {
        for(j=n-i;j<n+i-1;j++)
        {
            result[n-i][j]=i;
            result[n+i-2][j]=i;
        }
        for(j=n-i+1;j<n+i-2;j++)
        {
            result[j][n-i]=i;
            result[j][n+i-2]=i;
        }
    }
    for(int i=0;i<limit;i++)
    {
        for(j=0;j<limit;j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
