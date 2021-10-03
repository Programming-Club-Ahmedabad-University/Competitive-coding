// Problem link: (https://www.codechef.com/SDPCB21/problems/TEMPLELA/)
#include<bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define ll long long
#define lld long double
#define lli long long int
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define INF 1e18
#define mod 1000000007
#include <string.h>

int main()
{
    FIO;
    ll t, a,b,n,m, k, i, j,cnt;
    cin>>t;
    string s,st;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n],flag=1;
        string ans[]={"no","yes"};
        for(i=0;i<n;++i)
            cin>>arr[i];
        if((n&1)==0)
            flag=0;
        else
            {
                for(i=1;i<=n;++i)
                if(i<=n/2)
                {
                    if(i!=arr[i-1])
                    {
                        flag=0;
        break;
        }
        }
        else
            {
                if((n-i+1)!=arr[i-1])
                {
                    flag=0;
        break;
        }
    }
    }
    cout<<ans[flag]<<'\n';
    }



    return 0;
}
