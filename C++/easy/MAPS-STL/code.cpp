#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    map<string ,int> m;
    int queries,i,choice,num;
    string student_name;
    cin >> queries;
    map <string,int> :: iterator itr;
    for(i=0;i<queries;i++)
    {
        cin >> choice >> student_name;
        itr = m.find(student_name);
        switch(choice){
            case 1:
                cin >> num;
                if(itr == m.end())
                m.insert(pair<string, int>(student_name,num));
                else
                m[student_name]=m[student_name]+num;
            break;

            case 2:
                if(itr != m.end())
                m.erase(itr);
            break;

            case 3:
                if(itr != m.end())
                {
                    cout << itr->second  << endl;
                }
                else
                cout << "0" << endl;
            break;
        }
    }
    return 0;
}
