#include <iostream>
#include <deque>
using namespace std;

void printKMax(int arr[], int n, int k){
	//Write your code here.
    int i,j=0,max=0,count=0,x=0;
    deque <int> mydeque;
    for(i=1;i<=k;i++)
    {
        if(arr[j]>=max)
        {
          max = arr[j];
          count=i;
        }
        mydeque.push_back(arr[j]);
        j++;
    }
    cout << max << " ";
    for(i=1;i<=n-k;i++)
    {
        mydeque.pop_front();
        count--;
        mydeque.push_back(arr[j]);

        if(count!=0)
        {

            if(max<=arr[j])
            {
                count=k;
                max = arr[j];
            }

        }
        else
        {
            max=0;
            x=1;
          for (auto it = mydeque.begin(); it != mydeque.end(); ++it)
          {
              if(*it>=max)
              {
                  count=x;
                  max=*it;
              }
              x++;
          }
        }
        cout << max << " ";
        j++;
    }
cout << endl;
}

int main(){

	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
