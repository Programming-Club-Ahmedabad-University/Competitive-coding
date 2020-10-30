//Educational Codeforces Round 81 (Rated for Div. 2), problem: (A) Display The Number
#include <iostream>
 
using namespace std;
 
int main()
{
    int n,t,x;
    cin>>n;
    while(n>0){
        cin>>t;
        if(t%2==0){
            for(int i=0;i<t/2;i++){
                cout<<"1";
            }
        }
        else {
            cout<<"7";
            for(int i=0;i<(t-3)/2;i++){
                cout<<"1";
            }
        }
        cout<<endl;
        n--;
    }
    return 0;
}