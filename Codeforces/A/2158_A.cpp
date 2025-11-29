#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fastio() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
fastio();
ll t,n,m,x,y,z,p,q;
cin>>t;
while(t--){
  cin>>n;
  p=0;
  cin>>x>>y;
  p=y+(x/2);
  cout<<min(n,p)<<endl;
}
return 0;
}