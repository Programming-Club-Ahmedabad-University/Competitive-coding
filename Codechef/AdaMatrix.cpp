#include<iostream>
#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n][n], cnt=0,tmp=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
                if(i==0 && j!=0 && j!=1){
                    if((a[i][j]!=j+1 && a[i][j-1]==j) || (a[i][j]==j+1 && a[i][j-1]!=j)){
                        cnt++;
                    }
                }
            }
        }
        if(a[0][n-1]!=n){ cnt++;}
        cout<<cnt<<"\n";
    }
    return 0;
}
