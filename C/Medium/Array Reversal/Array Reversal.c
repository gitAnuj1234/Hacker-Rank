#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    int limit;
    limit=num%2==0?num/2:(num-1)/2;

    /* Write the logic to reverse the array. */
    for(i=0;i<limit;i++)
    {
        int temp=arr[i];
        arr[i]=arr[num-i-1];
        arr[num-i-1]=temp;
    }
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
