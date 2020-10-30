#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long
int main()
{
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int arr[n+1];
        for(int i=1;i<n+1;i++){
            cin>>arr[i];
        }
        vector<vector<ll> > fin;
        vector<pair<ll,ll> > pairs;
        bool pos=true;
		bool vis[n+1]={false};
		for(ll i=1;i<n;i++){
			ll l=i;
			vector<ll> seq;
			while(!vis[l]){
				vis[l] = true;
				seq.push_back(l);
				l=arr[l];
			}
			ll siz=seq.size();
			if(siz<=1)
				continue;
			for(int j=1;j<siz-1;j+=2){
				fin.push_back({seq[0],seq[j],seq[j+1]});
			}
			if(seq.size()%2==0){
				pairs.push_back({seq[0],seq.back()});
			}
		}
        if(!(pairs.size()%2==0))
			pos=false;
		else{
			for(ll i=0;i<pairs.size();i+=2){
				fin.push_back({pairs[i].first, pairs[i+1].first, pairs[i+1].second});
				fin.push_back({pairs[i+1].first, pairs[i].second, pairs[i].first});
			}
		}
		if(fin.size()>k){
			pos = false;
        }
		if(pos){
			cout<<fin.size()<<"\n";
			for(ll i=0;i<fin.size();i++){
				for(ll j=0;j<fin[i].size();j++){
					cout<<fin[i][j]<<" ";
				}
				cout<<"\n";
			}
		}
		else{
			cout<<"-1\n";
		}
	}
	return 0;
}
