#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <math.h>
#include <string>
#include <cstring>
#include <set>
#include <map>
#include <unordered_map>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<int,pair<int,int>> piii;
typedef vector<int> vi;
typedef vector<pii> vii;

#define ri(a) scanf("%d", &a)
#define rii(a,b) scanf("%d %d", &a, &b)
#define riii(a,b,c) scanf("%d %d %d", &a, &b, &c)
#define rl(a) scanf("%lld", &a)
#define rll(a,b) scanf("%lld %lld", &a, &b)
#define FOR(i,n,m) for(int i=n; i<m; i++)
#define ROF(i,n,m) for(int i=n; i>m; i--)
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define F first
#define S second

const int INF = 0x3f3f3f3f;
const ll LLINF = 1e18;
const int maxN = 1e5; // CAMBIAR ESTE

// GJNM

int main(){
	int n;
	ri(n);
	vector< pair<ll,ll> > ans;
	ans.pb({1,1}), ans.pb({2,1}), ans.pb({1,2}), ans.pb({2,2}), ans.pb({3,2});
	ans.pb({2,3}), ans.pb({3,3});
	ll cnt = 1;
	ll currx = 3, curry = 3;
	while(cnt<n){
		cnt++;
		ans.pb({currx+1,curry}), ans.pb({currx, curry+1}), ans.pb({currx+1, curry+1});
		currx++, curry++;
	}
	printf("%d\n", (int)ans.size());
	for(auto p : ans)
		printf("%lld %lld\n", p.F, p.S);
	return 0;
}