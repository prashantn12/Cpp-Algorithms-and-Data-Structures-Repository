#include <bits/stdc++.h>
using namespace std;
//"Decipline/regret"
//#define ll long long int

/*What is heap --> Heap is data structure .. Heap is complete binary tree(cbt) 
and it will come with heap order property that is max heap and min heap 

*/

int main() {
	int t;
    cin>>t;
	while (t--)
	{
		int n,k;
		cin>>n>>k;
		int arr[n];
		priority_queue<int,vector<int>,greater<int>> q;//This is min heap;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int i=0;i<n;i++){
			q.push(arr[i]);
		}
		for(int i=1;i<k;i++){
			q.pop();
		}
		cout<<q.top()<<endl;
	}
	
	return 0;
}


