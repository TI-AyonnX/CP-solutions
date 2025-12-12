#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main(){
ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
ll t,n,m,k=0,x,y,z,zz,alice,bob,min,sum;
cin>>t;
while(t--){
    cin>>n;
    min=LLONG_MAX;
    sum=0;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    for(ll i=0,j=1;j<n;i++,j++){
        sum=v[i]+v[j];
        if(sum<min){
            min=sum;
        }
    }
    cout<<min<<endl;
}
return 0;
}