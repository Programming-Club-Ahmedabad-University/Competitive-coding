//Codeforces Round #642 (Div. 3), problem: (B) Two Arrays And Swaps
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long
 
int main(){
	ll t;
	cin>>t;
	while(t--){
        ll n,k,j=0,sum=0;
        cin>>n>>k;
        ll a[n],b[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        for(ll i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n, greater<int>());
        //if(){
            while(k && a[j]<b[j]){
                //if(a[j]<b[j]){
                    sum=sum-a[j]+b[j];
                    k--;
                    j++;
                }
            //}
        //}
        cout<<sum<<"\n";
	}
	return 0;
}