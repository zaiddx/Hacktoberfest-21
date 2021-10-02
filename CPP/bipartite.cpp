#include<bits/stdc++.h>
#define ll long long int
#define F first
#define S second
#define pb push_back
#define p pair
#define ld long double
#define rep(start,end,i) for(ll i=start;i<end;i++)
#define repb(start,end,i) for(ll i=start-1;i>=end;i--)
#define mp make_pair
#define popc __builtin_popcount()
#define lb lower_bound
#define ub upper_bound
using namespace std;

vector <ll> arr[100];
ll vis[100] = {0};
ll color[100];

bool bipartite_bfs(){
	queue <pair<ll,ll>> q;
	vis[1] = 1;
	color[1] = 0;
	q.push({1,0});
	while(!q.empty()){
		ll top_v = q.front().first;
		cout<<top_v<<" "<<q.front().second<<endl;
		for(auto x:arr[top_v]){
			if(!vis[x]){
				vis[x] = 1;
				color[x] = 1-q.front().second;
				q.push({x,1-q.front().second});
			} else if(color[x] == q.front().second)
				return false;
		}
		q.pop();
	}
	return true;
}

bool bipartite_dfs(ll r, ll c){
	vis[r] = 1;
	color[r] = c;
	cout<<r<<" "<<c<<endl;
	for(auto x:arr[r])
		if(!vis[x]){
			if(!bipartite_dfs(x,1-c))
				return false;
		}
		else if(color[x] == c)
			return false;
	return true;
}

void solve(){
	ll test=1;
	// cin>>test;
	while(test--)
	{
		ll n;
		cin>>n;
		ll temp;
		cin>>temp;
		while(temp--){
			ll a,b;
			cin>>a>>b;
			arr[a].pb(b);
			arr[b].pb(a);
		}
		cout<<bipartite_dfs(1,0)<<endl;
		for(int i=1;i<=n;i++)
			cout<<color[i]<<" ";
		cout<<endl;
		memset(vis , 0 ,sizeof(vis));
		memset(color , -1 ,sizeof(color));
		cout<<bipartite_bfs()<<endl;
		for(int i=1;i<=n;i++)
			cout<<color[i]<<" ";
		cout<<endl;
	}
	return;
}

int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
return 0;
}