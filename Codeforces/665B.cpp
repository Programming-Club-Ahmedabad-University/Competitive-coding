//Codeforces Round #665 (Div. 2), problem: (B) Ternary Sequence
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;
	while(t--){
		ll x, y, z, a, b, c;
		cin>>x >> y >> z >> a >> b >> c;
		ll ans = 2*min(z,b);
		z -= ans/2;
		b -= ans/2;
		ll t = min(z, c);
		z -= t;
		c -= t;
		t = min(x, c);
		x -= t;
		c -= t;
		ans -= 2*min(c, y);
		cout << ans << "\n";
	}
	return 0;
}