#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fastio() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
fastio();
ll t,n,x,y,z,p,q,m,zero_cnt,sum;
cin>>t;
while(t--){
 cin>>n;
 zero_cnt=0,sum=0,x=0;
 m=n;
 vector<ll>v(n);
 for(ll i=0;i<n;i++){
  cin>>v[i];
 }
 for(ll i=0;i<n;i++){
  if(v[i]==0) zero_cnt++;
  sum+=v[i];
 }
 x=sum-n;
 if(x>0) cout<<min(n-zero_cnt,x+1)<<endl;
 else cout<<1<<endl;
}
return 0;
}