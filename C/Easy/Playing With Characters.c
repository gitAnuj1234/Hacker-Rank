#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch;
    char s[100];
    scanf("%c",&ch);
    scanf("%s",s);
    printf("%c\n",ch);
    printf("%s\n",s);
    scanf("\n");
    scanf("%[^\n]%*c",s);
    printf("%s",s);
    return 0;
}
