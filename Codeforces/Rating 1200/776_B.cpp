#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fastio() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void primesieve(ll n){
    vector<ll>v(n+2,1);
    for(ll i=2;i*i<=n+1;i++){
        if(v[i]==1){
            for(ll j=i*i;j<=n+1;j+=i){
                v[j]=2;
            }
        }
    }
    for(ll i=2;i<=n+1;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
fastio();
ll t,n,m,x,y,z,p,q,r;
cin>>n;
if(n==1 || n==2){
    cout<<1<<endl;
    while(n--){
        cout<<1<<" ";
    }
    cout<<endl;
}
else if(n==3){
    cout<<2<<endl;
    cout<<1<<" "<<1<<" "<<2<<endl;
}
else{
    cout<<2<<endl;
    primesieve(n);
}
return 0;
}