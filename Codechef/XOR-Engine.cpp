#include<stdio.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
long countBitSet(long number)
{
        long cnt=0,i,temp;
        for(i=31;i>=0;i--){
            temp=(number >> i);
            if (temp & 1){
                cnt++;
            }
        }
        return cnt;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n,q,t,sum,num,tem,i,j,k,l,cnt=0;
    scanf("%ld",&t);
    for (i=0;i<t;i++){
        scanf("%ld %ld",&n,&q);
        long arr[n];
        for (j=0;j<n;j++){
            scanf("%ld",&arr[j]);
        }
        long sumE=0;
        char ans[10000000];
        int b[n];
        for(k=0;k<n;k++){
            sum=countBitSet(arr[k]);
            if(sum%2==0){
                sumE++;
            }
        }
        for (l=0;l<q;l++){
            scanf("%ld",&num);
            tem=countBitSet(num);
            if (tem%2==0){
                printf("%ld %ld \n",sumE,n-sumE);
            }
            else{
                printf("%ld %ld \n",n-sumE,sumE);
            }
        }
    }
    return 0;
}

