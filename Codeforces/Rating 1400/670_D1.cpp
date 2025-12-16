#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
int main(){
fastio();
ll t,n,f,m=LLONG_MAX,zz=0,x,y,z,minn=0,cnt;
cin>>n>>f;
vector<ll>v(n),vv(n);
for(ll i=0;i<n;i++){
    cin>>v[i];
}
for(ll i=0;i<n;i++){
    cin>>vv[i];
}
for(ll i=0;i<n;i++){
  minn=vv[i]/v[i];
  if(minn<m) m=minn;
}
for(ll i=0;i<n;i++){
   vv[i]-=(m*v[i]);
}
while(f>0){
  cnt=0;
  for(ll i=0;i<n;i++){
    if(vv[i]<v[i]){
      cnt+=v[i]-vv[i];
      vv[i]=0;
    }
    else if(v[i]<=vv[i]){
      vv[i]-=v[i];
    }
  }
  if(f>=cnt){
    m++;
    f-=cnt;
  }
  else break;
}
cout<<m<<endl;
return 0;
}