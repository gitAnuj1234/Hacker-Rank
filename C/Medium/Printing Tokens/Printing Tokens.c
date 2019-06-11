#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    char temp[20];
    int t=0;
    *(s+strlen(s))=' ';
    for(int i=0;i<strlen(s);i++)
    {
        if(*(s+i)!=' ')
        temp[t++]=*(s+i);
        else
        {
            temp[t++]='\0';
            printf("%s\n",temp);
            t=0;
        }
    }
    //Write your logic to print the tokens of the sentence here.
    return 0;
}
