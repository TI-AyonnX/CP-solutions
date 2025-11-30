#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fastio() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
fastio();
ll t,n,m,k,y,z,flag,sum;
cin>>t;
while(t--){
cin>>n;
vector<ll>v(n);
map<ll,ll>mp,mpp;
vector<pair<ll,ll>>vp,vpp;
flag=0,sum=1;
for(ll i=0;i<n;i++){
  cin>>v[i];
  mp[v[i]]++;
  vp.push_back(make_pair(v[i],i));
}
sort(vp.begin(),vp.end());
for(auto x:mp){
  if(x.second%x.first!=0){
    flag=1;
    break;
  }
}
sum=1;
if(flag) cout<<-1<<endl;
else{
  for(ll i=0;i<vp.size();i++){
    if(vp[i].first==1){
      vpp.push_back(make_pair(sum,vp[i].second));
      sum++;
    }
    else{
      vpp.push_back(make_pair(sum,vp[i].second));
      mpp[vp[i].first]++;
      if(mpp[vp[i].first]==vp[i].first){
        sum++;
        mpp[vp[i].first]=0;
      }
    }
  }
  sort(vpp.begin(),vpp.end(),[](auto &a,auto &b){
    return a.second<b.second;
  });
  for(auto x:vpp){
    cout<<x.first<<" ";
  }
  cout<<endl;
}
}
return 0;
}