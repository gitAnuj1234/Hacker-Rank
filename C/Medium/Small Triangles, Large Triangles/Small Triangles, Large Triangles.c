#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    double p=0,area[n];
    for(int i=0;i<n;i++)
    {
        p=(tr[i].a+tr[i].b+tr[i].c)/2.0;
        area[i]=sqrt(p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c));
    }
    double temp_area;
    int temp_a,temp_b,temp_c;
    for (int i = 0; i < n-1; i++)

       // Last i elements are already in place
       for (int j = 0; j < n-i-1; j++)
           if (area[j] > area[j+1])
           {
               temp_area=area[j];
               area[j]=area[j+1];
               area[j+1]=temp_area;

               temp_a=tr[j].a;
               tr[j].a=tr[j+1].a;
               tr[j+1].a=temp_a;

               temp_b=tr[j].b;
               tr[j].b=tr[j+1].b;
               tr[j+1].b=temp_b;

               temp_c=tr[j].c;
               tr[j].c=tr[j+1].c;
               tr[j+1].c=temp_c;
           }


}
int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
