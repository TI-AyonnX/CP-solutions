#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main(){
ll t,n,k,x,y,z;
cin>>t;
while(t--){
  cin>>n>>k;
  vector<tuple<ll,ll,ll>>tp;
  while(n--){
    cin>>x>>y>>z;
    tp.push_back(make_tuple(x,y,z));
  }
  sort(tp.begin(),tp.end());
  for(ll i=0;i<tp.size();i++){
    if(k>=(get<0>(tp[i])) && k<=(get<1>(tp[i])) && get<2>(tp[i])>=k){
      k=get<2>(tp[i]);
    }
  }
  cout<<k<<endl;
}
return 0;
}