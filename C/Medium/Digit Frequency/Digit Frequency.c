#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[20000];
    gets(s);
    int i,num[10];
    for(i=0;i<10;i++)
    num[i]=0;
    for(i=0;i<strlen(s);i++)
    {
        int temp=*(s+i) -'0';
        if(temp>=0 && temp<=9)
        {
            num[temp]=num[temp]+1;
        }

    }
    for(i=0;i<10;i++)
    printf("%d ",num[i]);
    return 0;
}
