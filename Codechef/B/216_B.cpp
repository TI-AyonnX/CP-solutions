#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main(){
ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
ll t,n,m,k=0,x,y,z,zz,alice,bob,candies;
cin>>t;
while(t--){
    cin>>x>>y;
    z=0;
    k=y-x;
    z=k/2;
    cout<<z+x<<" "<<z<<endl;
}
return 0;
}