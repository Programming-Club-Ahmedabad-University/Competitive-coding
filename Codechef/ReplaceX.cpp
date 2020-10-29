#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t,n,x,p,k;
    cin>>t;
    while(t--){
        cin>>n>>x>>p>>k;
        ll a[n],cnt=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        if(x==a[p-1]){}
        else if(p<=k && a[p-1]>x){
            for(int i=p-1;i>=0;i--){
                if(a[i]<=x){
                    break;
                }
                cnt++;
            }
        }else if(p>=k && a[p-1]<x){
            for(int i=p-1;i<n;i++){
                if(a[i]>=x){
                    break;
                }
                cnt++;
            }
        }else{
            cnt=-1;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
