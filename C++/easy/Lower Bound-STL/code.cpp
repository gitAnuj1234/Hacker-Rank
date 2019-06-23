#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int length,i,temp;
    cin >> length;
    vector <int> arr;
    for(i=0;i<length;i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    int queries;
    cin >> queries;
    vector <int> :: iterator low;
    for(i=1;i<=queries;i++)
    {
        cin >> temp;
        low = lower_bound(arr.begin(), arr.end(), temp);
        if(temp==arr[low-arr.begin()])
        cout << "Yes ";
        else
        cout << "No ";
        cout << low-arr.begin()+1 << endl;
    }
    return 0;
}
