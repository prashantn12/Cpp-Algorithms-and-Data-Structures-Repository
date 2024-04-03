#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int,int>> v;
    v={{1,2},{2,3},{3,6}};
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    //how to cin it;
    for(int i=0;i<n;i++){
        int x ,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
}

/* Another one example
#include <bits/stdc++.h>
using namespace std;
//Decipline/regret

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int n,p,ti;
		cin>>n>>p>>ti;
		vector<vector<long long int>> v;
		vector<long long int> pr;
		for(int i=0;i<n;i++){
			for(int j=0;j<p;j++){
				long long int x;
				cin>>x;
				pr.push_back(x);
			}
			sort(pr.begin(),pr.end());
			v.push_back(pr);
			pr.clear();
		}
		long long int sum=0,ans=0,penlty=0,add=0,sm=0;
		vector<pair<long long int,long long int>> pa;
		for(int i=0;i<v.size();i++){
			for(int j=0;j<v[i].size();j++){
				sum=sum+v[i][j];
				if(ti>=sum){
					ans++;
					
					if(j==0){
						add=0;
					}else{
						add=penlty;
					}
					penlty=v[i][j]+add;
					sm=sm+penlty;
				}
			}
			pa.push_back({ans,sm});
			sum=0,ans=0,penlty=0,add=0,sm=0;
		}
		long long int pra=pa[0].first; long long int ved=pa[0].second;
		long long int rank=1;
		for(int i=1;i<pa.size();i++){
        //cout<<pa[i].first<<" "<<pa[i].second<<endl;
		if(pa[i].first>pra){
			rank++;
		}else if(pa[i].first==pra && pa[i].second<ved){
			rank++;
		}
    	}
		cout<<rank<<endl;
		
	}
	return 0;
}

*/