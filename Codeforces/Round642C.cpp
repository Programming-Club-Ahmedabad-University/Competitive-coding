//Codeforces Round #642 (Div. 3), problem: (C) Board Moves
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long
 
int main(){
	ll t;
	cin>>t;
	while(t--){
        ll n,sum=0;
        cin>>n;
        for(ll i=1;i<=n/2;i++){
            sum+=(i*i*8);
        }
        cout<<sum<<"\n";
	}
	return 0;
}