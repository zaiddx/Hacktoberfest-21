#include<bits/stdc++.h>
using namespace std;

int INF = 1000000005;
long long inf = 1000000000000000005LL;
#define sqr(x) ((ll)(x) * (x))
#define watch(x) cout<<#x<<" : "<<x<<endl
#define all(x) x.begin(), x.end()
#define len(v) v.size()
#define srt(v) sort( v.begin(), v.end())
#define rsrt(v) sort( v.rbegin(), v.rend())
#define rvrs(v) reverse( v.begin(), v.end())
#define rep(i, a, n) for(long long i = a; i < n; i++)
#define rep0(i, n) for(long long i = 0; i < n; i++)
#define rep1(i, n) for(long long i = 1; i <= n; i++)
#define repn(i, n) for(long long i = n-1;i >= 0;i--)
#define repstl(i,v) for(auto &i: v)
#define pb push_back
#define out(x) cout<<x<<"\n";
#define endl "\n"
#define outs(x) cout<<x<<" "
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
typedef long long ll;
typedef pair<long long, long long> pl;
typedef pair<long long, pl> ppl;
typedef vector<long long> vl;
typedef vector<vector<long long>> vvl;
typedef vector<pair<long long, long long>> vll;
typedef vector<ppl> vlll;
typedef vector<string> vs;
ll mod = 1e9 + 7;


// bool cycle_util(vl adj[],ll v , vl vis){
//     if(vis[v]==1) return true;
//     if(vis[v]==2) return false;

//     vis[v]=1; // Mark current node as processed
//     for(auto u : adj[v]){
//         if(cycle_util(adj,u,vis)) return true;
//     }
//     vis[v]=2; // Mark current node as visited
//     return false;
// }

// bool detectCycle(vl adj[],ll n){
//     vl vis(n,0);
//     rep(i,0,n){
//         if(!vis[i])
//             if(cycle_util(adj,i,vis)) return true;
//     }
//     return false;
// }

void dfs(vl adj[], ll v, vector<bool> visited , stack<ll> st){
    visited[v] = true;
    for(auto u : adj[v]){
        if(!visited[u]) dfs(adj,u,visited,st);
    }
    st.push(v);
}

void solve(){
    ll n,m;
    cin>>n>>m;
    vl adj[n];
    rep(i,0,m){
        ll u,v;
        cin>>u>>v;
        adj[u].pb(v);
    }
    // if(detectCycle(adj,n)){
    //     out("IMPOSSIBLE");
    //     return ;
    // }
    stack<ll> st;
    vector<bool>visited(n,false);

    rep(i,1,n){
        if(!visited[i]) dfs(adj,i,visited,st);
    }
    while(!st.empty()){
        outs(st.top());
        st.pop();
    }
    cout<<endl;
}

int main(){
    fastio;
    ll t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}