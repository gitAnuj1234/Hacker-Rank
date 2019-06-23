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
    int index_erase, start_erase, stop_erase;
    cin >> index_erase;
    cin >> start_erase >> stop_erase;
    arr.erase(arr.begin()+index_erase-1);

    arr.erase(arr.begin()+start_erase-1, arr.begin()+stop_erase-1);
    cout << arr.size() << endl;
    auto ir=arr.begin();
    while(ir!=arr.end())
    {
        cout << *ir << " ";
        ir++;
    }
    return 0;
}
