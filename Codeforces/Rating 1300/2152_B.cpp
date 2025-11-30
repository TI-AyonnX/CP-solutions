#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main(){
ll t,n,a,b,c,d,p,q,r,s,z;
cin>>t;
while(t--){
    cin>>n>>a>>b>>c>>d;
    p=min(c,d);
    q=max(c,d);
    if(a==c){
        if(b>d){
            cout<<n-d<<endl;
        }
        else cout<<d<<endl;
    }
    else if(b==d){
        if(a>c){
            cout<<n-c<<endl;
        }
        else cout<<c<<endl;
    }
    else if(a>c && b>d){
        cout<<n-p<<endl;
    }
    else if(a<c && b<d){
        cout<<q<<endl;
    }
    else if(a>c && b<d || a<c && b>d){
        if(a>c) r=n-c;
        else r=c;
        if(b>d) s=n-d;
        else s=d;
        z=max(r,s);
        cout<<z<<endl;
    }
}
return 0;
}