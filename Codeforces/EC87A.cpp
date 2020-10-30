//Educational Codeforces Round 87 (Rated for Div. 2), problem: (A) Alarm Clock
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t,a,b,c,d;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        if(b>=a){
            cout<<b<<"\n";
        }
        else if(c>d){
            ll sum=b;
            if((a-b)%(c-d)==0){
                sum+=(a-b)/(c-d)*c;
            }
            else{
                sum+=(((a-b)/(c-d))+1)*c;
            }
            cout<<sum<<"\n";
        }
        else{
            cout<<"-1\n";
        }
    }
    return 0;
}