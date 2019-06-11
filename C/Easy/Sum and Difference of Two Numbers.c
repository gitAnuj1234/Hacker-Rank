#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int x,y;
    float j,w;
    scanf("%d %d",&x,&y);
    scanf("%f %f",&j,&w);
    printf("%d %d\n",x+y,x-y);
    printf("%.1f %.1f",j+w,j-w);

    return 0;
}
