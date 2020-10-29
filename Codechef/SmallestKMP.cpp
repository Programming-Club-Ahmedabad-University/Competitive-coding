#include <iostream>
#include<bits/stdc++.h>
#include <string>

using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    string str,pat,temp;
    cin>>t;
    while(t--){
        cin>>str>>pat;
        ll arr[26]={0};
        temp="";
        bool k=false;
        for(ll i=0;i<str.length();i++){
            arr[str[i] - 'a']++;
        }
        for(ll i=0;i<pat.length();i++){
            arr[pat[i] - 'a']--;
        }
        for(ll i=0;i<pat.length();i++){
            if(pat[0]!=pat[i]){
                if(pat[0]>pat[i]){
                    k=true;
                }
                break;
            }
        }
        for(ll i=0;i<26;i++){
            if(k && ('a'+i)==pat[0]){
                temp+=pat;
            }
            while(arr[i]--){
                temp+='a'+i;
            }
            if(('a'+i)==pat[0] && !k){
                temp+=pat;
            }
        }
        cout<<temp<<"\n";
    }
	return 0;
}
