#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
vector<vector<ll>>adj;
vector<bool>visited;
vector<ll>vv;
ll flag=0;
void BFS(ll starting_node){
    queue<ll>q;
    q.push(starting_node);
    visited[starting_node]=true;
    while(!q.empty()){
        ll node=q.front();
        q.pop();
        if(!vv[node]) vv[node]=1;
        for(auto x:adj[node]){
            if(!visited[x]){
                visited[x]=true;         
                q.push(x);
                if(vv[node]==1) vv[x]=2;
                else vv[x]=1;
            }
            else{
               if(vv[x]==vv[node]){
                  flag=1;
                  break;
               }
            }
        }
    }
}
int main(){
   fastio();
   ll n,m,u,v,starting_node,cnt=0;
    cin>>n>>m;
    vv.resize(n+1,0);
    adj.resize(n+1);
    visited.resize(n+1,false);
    for(ll i=0;i<m;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(ll i=1;i<n;i++){
      if(!visited[i]){
         BFS(i);
      }
    }
    if(flag) cout<<"IMPOSSIBLE"<<endl;
    else{
      for(ll i=1;i<vv.size();i++){
        cout<<vv[i]<<" ";
      }
      cout<<endl;
    }
    return 0;
}