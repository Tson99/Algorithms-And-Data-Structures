//Link: https://leetcode.com/problems/two-sum/
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
 
 
bool cmp(int a, int b){
    return a > b;
}

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        vector<pair<int, int>> v;
        for (int i = 0; i < nums.size(); i++)
            v.PB(MP(nums[i], i));
        sort(v.begin(), v.end());
        vector<pair<int, int>>::iterator low;
        for (int i = 0; i < v.size(); i++){
            low = lower_bound(v.begin()+i+1, v.end(), MP(target - v[i].F, -1));
            int pos = low - v.begin();
            if ((low != v.end()) && ((*low).F == target - v[i].F)){
                result = {v[i].S, v[int(low - v.begin())].S};
                break;
            }
        }
        return result;
    }
};

void process(){
    Solution s;
    vector<int> nums = {2, 5, 5, 11};
    int target = 10;
    for (int x : s.twoSum(nums, target))
        cout << x << " ";
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
