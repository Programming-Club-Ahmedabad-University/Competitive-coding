#include<iostream>
#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,sum,d,num,tmp;
    cin>>t;
    while(t--){
        ll cnt=0,i=0,diff;
        cin>>n;
        sum=n*(n+1)/2;
        if(sum%2){
            cout<<"0\n";
        }else{
            d=1+4*sum;
            num=(sqrt(d)-1)/2;
            tmp=num;
            if(num*(num+1)==sum){
                cnt=((num-1)*num + (n-num)*(n-num-1))/2;
                num--;i++;
            }
            diff=(sum-num*(num+1))/2;
            while(diff<=n-1){
                tmp=max(1ll,num+1-diff);
                cnt+=min(num-tmp,n-tmp-diff)+1;
                diff+=num;
                num--;
            }
            cout<<cnt<<"\n";
        }
    }
    return 0;
}
