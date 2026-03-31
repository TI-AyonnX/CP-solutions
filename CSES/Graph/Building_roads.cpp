#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
vector<vector<ll>>adj;
vector<bool>visited;
void BFS(ll starting_node){
    queue<ll>q;
    q.push(starting_node);
    visited[starting_node]=true;
    while(!q.empty()){
        ll node=q.front();
        q.pop();
        for(auto x:adj[node]){
            if(!visited[x]){
                visited[x]=true;         
                q.push(x);
            }
        }
    }
}
int main(){
   fastio();
   ll n,m,u,v,starting_node,cnt=0;
   vector<ll>vv;
    cin>>n>>m;
    adj.resize(n+1);
    visited.resize(n+1,false);
    for(ll i=0;i<m;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(ll i=1;i<=n;i++){
      if(!visited[i]){
         vv.push_back(i);
         BFS(i);
         cnt++;
      }
    }
    cout<<cnt-1<<endl;
    if(vv.size()>=2){
      for(ll i=0;i<vv.size()-1;i++){
         cout<<vv[i]<<" "<<vv[i+1]<<endl;
      }
    }
    return 0;
}
