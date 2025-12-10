#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main(){
fastio();
ll t,n,m,k,x,y,z,zz;
cin>>n>>m;
vector<ll>v(n),vv(m);
for(ll i=0;i<n;i++){
    cin>>v[i];
}
for(ll i=0;i<m;i++){
    cin>>vv[i];
}
sort(v.begin(),v.end());
for(ll i=0;i<m;i++){
    x=upper_bound(v.begin(),v.end(),vv[i])-v.begin();
    cout<<x<<" ";
}
cout<<endl;
return 0;
}