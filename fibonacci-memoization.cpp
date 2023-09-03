#include<bits/stdc++.h>
using namespace std;

//range 
const int N= 1e5+5;
int save[N];

//fibonacci recurssion implementation
int fibo(int n){
    if(n<=1) return 1;

    if(save[n]!=-1){
        return save[n];
    }
    int ans1  = fibo(n-1);
    int ans2  = fibo(n-2);
    save[n]=ans1+ ans2;
    return save[n];
}
int main(){
    int n;
    cin>>n;

    for(int i=0; i<=n; i++){
        save[i]=-1;
    }

    cout<<fibo(n)<<endl;

    return 0;
}