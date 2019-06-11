#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a, b);
}
int next_permutation(int n, char **s)
{
	/**
	* Complete this method
	* Return 0 when there is no next permutation and 1 otherwise
	* Modify array s to its next permutation
	*/

    int index1=0,index2=0,i,flag=0;
    for(i=0;i<n-1;i++)
    {
        if(lexicographic_sort(s[i],s[i+1])<0)
        {
            flag=1;
            index1=i;
        }
    }
    if(flag==0) return 0;
    for(i=index1+1;i<n;i++)
    {
        if(lexicographic_sort(s[index1],s[i])<0)
        {
            index2=i;
        }
    }
    char temp[2500];
    strcpy(temp, s[index1]);
    strcpy(s[index1], s[index2]);
    strcpy(s[index2], temp);

    for(i=index1+1;i<((n+index1+1)/2);i++)
    {
    strcpy(temp, s[i]);
    strcpy(s[i], s[(n-i)+index1]);
    strcpy(s[(n-i)+index1], temp);
    }
    return 1;
}


int main()
