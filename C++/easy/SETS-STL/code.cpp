#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
       set <int> arr;
       int queries,i,choice,num;
       cin >> queries;
       set <int> :: iterator itr;
       for(i=0;i < queries;i++)
       {
           cin >> choice >> num;
           switch(choice)
           {
               case 1:
                    arr.insert(num);
               break;

               case 2:
                    itr = arr.find(num);
                    if(itr != arr.end())
                    {
                        arr.erase(itr);
                    }
               break;

               case 3:
                    itr = arr.find(num);
                    if(itr != arr.end())
                    cout << "Yes" << endl;
                    else
                    cout << "No" << endl;
               break;
           }
       }
    return 0;
}
