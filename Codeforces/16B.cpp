//Codeforces Beta Round #16 (Div. 2 Only), problem: (B) Burglar and Matches
#include<iostream>
#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    vector< pair<int,int> > vect;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q,m,p,sum=0,tot=0;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>q>>p;
        vect.push_back(make_pair(p,q));
    }
    sort(vect.begin(),vect.end());
    int i=m-1;
    while((sum+vect[i].second<=n)&& (i>=0)){
        sum+=vect[i].second;
        tot+=(vect[i].first*vect[i].second);
        i--;
    }
    if(sum<n && i>=0){
        tot+=(n-sum)*vect[i].first;
    }
    cout<<tot<<"\n";
    return 0;
}
