// Problem Link: (https://www.codechef.com/START10B/problems/CRDFLP)
#include<bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define ll long long
#define lli long long int
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define INF 1e18
#define mod 1000000007
#include <string.h>
void solve() {
    ll n, ans = 0, res = 0;
    cin >> n;
    vector<ll> a(n), b(n);
    for(ll i = 0; i < n; i++){
        cin >> a[i];}
    for(ll i = 0; i < n; i++){
        cin >> b[i];}
    vector<ll> v(n, -1);
    for(ll i = 29; i >= 0; i--) {
        ll ok = 1;
    for(ll j = 0; j < n; j++) {
        if(v[j] != -1) {
            if(v[j] == 1){
                ok = ((ok&(b[j]>>i)&1));}
            else {ok = ((ok&(a[j]>>i)&1));}
            continue;
   }
   if(((a[j]>>i)&1) || ((b[j]>>i)&1)) {;}
   else {
        ok = 0;break;
   }
  }
  if(!ok)
   continue;
  ll temp = 1;
  for(ll j = 0; j < n; j++) {
   if(v[j] != -1) {
    if(v[j] == 1) temp = ((temp&(b[j]>>i)&1));
    else temp = ((temp&(a[j]>>i)&1));
    continue;
   }
   if(((a[j]>>i)&1) && ((b[j]>>i)&1)) {}
   else if(((a[j]>>i)&1)) v[j] = 0;
   else if(((b[j]>>i)&1)) v[j] = 1, res++;
   else {
    temp = 0;
    break;
   }
  }
  ans += (temp * (1ll<<i));
 }
 cout << ans << " " << res << '\n';
}
int main()
{
    FIO;
    ll t, a,b,n, m, k, i, j, cnt;
    string s;
    cin>>t;
    while(t--){
        solve();


    }
}
