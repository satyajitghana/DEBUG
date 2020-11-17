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
ll CNT[30];
string cf = "codeforces";

ll prod(){
	ll ret = 1;
	FOR(i,0,10)
		ret *= CNT[i];
	return ret;
}

int main(){
	ll k;
	rl(k);
	FOR(i,0,10)
		CNT[i] = 1;
	int ind = 0;
	while(true){
		if ( prod() >= k )
			break;
		CNT[ind]++;
		ind = (ind+1)%10;
	}
	FOR(i,0,10){
		FOR(j,0,CNT[i]){
			printf("%c",cf[i] );
		}
	}
	printf("\n");
	return 0;
}