#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int length,temp;
    cin >> length;
    vector<int>arr;
    for(int i=0;i<length;i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }

    sort(arr.begin(),arr.end());
    auto index=arr.begin();
    while(index!=arr.end())
    {
        cout << *index << " ";
        index = index+1;
    }
    return 0;
}
