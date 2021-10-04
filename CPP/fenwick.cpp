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

ll fen[101];
ll n;

void update(ll i,ll add){
	while(i<n){
		fen[i] += add;
		i += (i&(-i));
	}
}

ll sum(ll i){
	ll s = 0;
	while(i>0){
		s += fen[i];
		i -= (i&(-i));
	}
	return s;
}

ll find_sum(ll l,ll r){
	return sum(r) - sum(l-1);
}

void solve(){
	ll test=1;
	// cin>>test;
	while(test--)
	{
		cin>>n;
		ll arr[n];
		for(ll i=1;i<=n;i++){
			cin>>arr[i];
			update(i,arr[i]);
		}
		ll q;
		cin>>q;
		while(q--){
			ll ch;
			cin>>ch;
			if(ch == 1){
				ll l,r;
				cin>>l>>r;
				cout<<find_sum(l,r)<<endl;
			} else {
				ll idx,val;
				cin>>idx>>val;
				update(idx,val);
			}
		}
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