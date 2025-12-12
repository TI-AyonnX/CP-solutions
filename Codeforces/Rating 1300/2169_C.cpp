#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
int main(){
fastio();
ll t,n,zz,sum,poss,maxx;
cin>>t;
while(t--){
  cin>>n;
  sum=0,poss=0,zz=0,maxx=0;
  vector<ll>v(n),vv(n),vvv(n);
  for(ll i=0;i<n;i++){
    cin>>v[i];
  }
  for(ll i=0;i<n;i++){
   sum+=v[i];
   vv[i]=sum;
  }
  for(ll i=0;i<n;i++){
   poss=2*(1+i);
   vvv[i]=poss;
  }
  for(ll i=0,j=0;j<n;){
    if(v[j]>vvv[j]){
       zz-=v[j]-vvv[j];
       if(zz>=0){
        j++;
       }
       else{
        zz=0;
        j++;
        i=j;
       }
    }
    else{
      zz+=vvv[j]-v[j];
      j++;
    }
   maxx=max(zz,maxx);
  }
  cout<<vv[n-1]+maxx<<endl;
}
return 0;
}