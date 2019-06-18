#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
     int n,q,i,col,j,temp;
     cin >> n >> q;
     vector<vector<int>> vec(n);
     for( i=0;i<n;i++)
     {
         cin >> col;
         vec[i]=vector<int>(col);
         for(j=0;j<col;j++)
         {
             cin >> vec[i][j];
         }
     }
     int res[q];
     for(i=0;i<q;i++)
     {
         cin>> temp >> col;
         res[i]=vec[temp][col];
     }
     for(i=0;i<q;i++)
     {
         cout << res[i] <<"\n";
     }
    return 0;
}
