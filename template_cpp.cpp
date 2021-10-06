#include<bits/stdc++.h>
using namespace std;
 
typedef long double ld;
typedef long long ll;
typedef pair<ll,ll> ii;
 
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define FOR(i,a,b) for(ll i=a;i<=b;i++)
#define FOD(i,a,b) for(ll i=a;i>=b;i--)
#define ALL(a) (a).begin(),(a).end()
#define WHATIS(x) cout << #x << " is " << x << endl;
#define RANGE(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define ERROR(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
 
//__builtin_ffs(x) return 1 + index of least significant 1-bit of x
//__builtin_clz(x) return number of leading zeros of x
//__builtin_ctz(x) return number of trailing zeros of x
//__builtin_popcount(x) returns number of 1-bits of x
 
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
    cout << *it << " = " << a << endl;
    err(++it, args...);
}
 
const ll mod = 1e9+7;
const ll maxN = 1e5;
const ll INF = 1e18;
const ld EPS = 1e-9;
 
 
bool cmp(int a, int b) {return a > b;}

void process(){
    WHATIS(-17%5)
    return;
}

int main()
{
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    process();
	return 0;
}
