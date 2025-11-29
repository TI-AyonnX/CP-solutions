#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fastio() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
fastio();
ll t,n,x,y,z,p,q,m,cnt1,cnt2,flag;
cin>>t;
while(t--){
  x=0,y=0;
  cin>>n;
  if(n>=3 && n<=4){
   x=((n*n)-1);
   y=3*x+(x-n);
  }
  else if(n>=5){
    x=(n*n-1)-n;
    y=x*3+(x-n)+(x+n);
  }
  if(n==1) cout<<1<<endl;
  else if(n==2) cout<<9<<endl;
  else cout<<y<<endl;
}
return 0;
}