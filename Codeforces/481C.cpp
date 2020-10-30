//Codeforces Round #481 (Div. 3), problem: (C) Letters
#include<iostream>
#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k,b, j=0, tmp=0;
        cin>>n>>k;
        ll v[n];
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<k;i++){
            cin>>b;
            b-=tmp;
            while(b){
                if(v[j]<b){
                    b-=v[j];
                    tmp+=v[j];
                    j++;
                }else{
                    cout<<j+1<<" "<<b<<"\n";
                    break;
                }
            }
        }
    return 0;
}
