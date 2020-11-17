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
const int maxN = 2e5 + 30; // CAMBIAR ESTE

// GJNM
ll A[maxN];

int cnt[30];

int main(){
	int n;
	ri(n);
	FOR(i,0,n){
		ll aux;
		rl(A[i]);
		FOR(j,0,30){
			if ( A[i] & (1LL<<j) ){
				cnt[j]++;
			}
		}
	}

	ll ans = 0;
	while(true){
		ll act = 0;
		FOR(j,0,30){
			if ( cnt[j] > 0){
				cnt[j]--;
				act += (1LL<<j);
			}
		}
		ans += act*act;
		if ( act == 0 )
			break;
	}
	printf("%lld\n", ans);

	return 0;
}