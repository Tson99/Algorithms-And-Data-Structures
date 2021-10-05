#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> v;
        v.push_back(prices[0]);
        for (int i = 1; i < prices.size(); i++){
            v.push_back(min(v[i-1], prices[i]));
        }
        int res = 0;
        for (int i = 1; i < prices.size(); i++){
            res = max(res, prices[i] - v[i-1]);
        }
        return res;
    }
};

int main(){
    cout << "Hello world";
    return 0;
}