// Problem link: (https://www.codechef.com/problems/CLEARARR)
#include<bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define ll long long
#define lli long long int
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define INF 1e18
#define mod 1000000007
#include <string.h>


int main()
{
    FIO;
    ll t, n, m, k, i, j, cnt;
    string s;
    cin>>t;
    while(t--){
        ll x;
        cin>>n>>k>>x;
        vector<ll>v(n);
        for(i=0;i<n;i++){
            cin>>v[i];
        }
        cnt = 0;
        sort(all(v));
        reverse(all(v));
        for(i=0;i<n;i++){
            if(k){
                cnt+=min(v[i]+v[i+1],x);
                --k;
                ++i;
                continue;
            }
            cnt+=v[i];
        }
        cout<<cnt<<endl;

    }
    return 0;
}
