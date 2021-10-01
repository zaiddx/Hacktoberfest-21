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

int main(){
    fastio;
    ll n,x;
    cin>>n>>x;
    vl v(n);
    rep(i,0,n){
        cin>>v[i];
    }
    vl dp(x+1,0);
    dp[0] = 1;
    rep(i,1,x+1){
        rep(j,0,n){
            if(i-v[j] >= 0){
                (dp[i]+=dp[i-v[j]])%=mod;
            }
        }
    }
    out(dp[x]);
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int mod = 1e9+7;
//   int n, target;
//   cin >> n >> target;
//   vector<int> c(n);
//   for (int&v : c) cin >> v;

//   vector<int> dp(target+1,0);
//   dp[0] = 1;
//   for (int i = 1; i <= target; i++) {
//     for (int j = 0; j < n; j++) {
//       if (i-c[j] >= 0) {
// 	(dp[i] += dp[i-c[j]]) %= mod;
//       }
//     }
//   }
//   cout << dp[target] << endl;