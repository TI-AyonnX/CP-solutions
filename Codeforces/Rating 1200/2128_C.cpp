#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main(){
ll t,n,k,p,flag;
cin>>t;
while(t--){
  p=2e9+7,flag=0;
  cin>>n;
  vector<ll>v(n);
  for(ll i=0;i<n;i++){
    cin>>v[i];
  }
  for(ll i=0;i<n;i++){
    p=min((2*v[i]-1),p);
    if(v[i]>p){
      flag=1;
      break;
    }
  }
  if(flag) cout<<"NO"<<endl;
  else cout<<"YES"<<endl;
}
return 0;
}