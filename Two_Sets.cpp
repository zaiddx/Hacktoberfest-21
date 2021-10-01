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
#define repn(i, n) for(long long i = n-1;i >= 1;i--)
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
    ll n;
    cin>>n;
    ll sum = n*(n+1)/2;
    if(sum%2 != 0){
        out("NO");
        return 0;
    }
    else {
        out("YES");
        vl first;
        vl second;
        if(n%2 == 0){
            rep(i,1,n/2+1){
                if(i%2 == 0){
                    second.pb(i);
                    second.pb(n-i+1);
                }
                else{
                    first.pb(i);
                    first.pb(n-i+1);
                }
                
            }
        }
        else{
            ll req = sum/2;
            vector<bool> flag(n+1,false);
            repn(i,n+1){
                if(i<=req){
                    first.pb(i);
                    flag[i] = true;
                    req-=i;
                }  
            }
            rep(i,1,n+1){
                if(flag[i]==false) second.pb(i);
            }
        }
        out(first.size());
            rep(i,0,first.size()){
                outs(first[i]);
            }
            cout<<endl;
            out(second.size());
            rep(i,0,second.size()){
                outs(second[i]);
            }
            cout<<endl;
    }
    return 0;
}