#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> vec1;
    int i=0;
    stringstream ss(str);
    char ch;

    while(ss>>i)
    {
      ss >> ch;
      vec1.push_back(i);
    }
    return vec1;
    // Complete this function
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
