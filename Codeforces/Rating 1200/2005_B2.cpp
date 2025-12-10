#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main(){
ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
ll t,n,m,k,x,y,z,zz,p,q,pp,qq;
cin>>t;
while(t--){
    cin>>x>>y>>z;
    vector<ll>v(y),vv(z);
    for(ll i=0;i<y;i++){
        cin>>v[i];
    }
    for(ll i=0;i<z;i++){
        cin>>vv[i];
    }
    sort(v.begin(),v.end());
    if(y==1){
        for(ll i=0;i<z;i++){
            if(vv[i]==v[0]) cout<<1<<endl;
            else if(vv[i]>v[0]) cout<<x-v[0]<<endl;
            else cout<<v[0]-1<<endl;
        }
    }
    else{
     for(ll i=0;i<z;i++){
       zz=lower_bound(v.begin(),v.end(),vv[i])-v.begin();
       if(vv[i]<v[0]) cout<<v[0]-1<<endl;
       else if(vv[i]>v[v.size()-1]) cout<<x-v[v.size()-1]<<endl;
       else if(vv[i]==v[0] || vv[i]==v[v.size()-1]) cout<<1<<endl;
       else{
        p=vv[i]-v[zz-1];
        q=v[zz]-vv[i];
        if(p==0 || q==0) cout<<1<<endl;
        else{
          pp=p-1;
          qq=q-pp;
          if(qq%2==1) cout<<pp+(qq/2)+1<<endl;
          else cout<<(qq/2)+pp<<endl;
        }
       }
     }
    }
}
return 0;
}