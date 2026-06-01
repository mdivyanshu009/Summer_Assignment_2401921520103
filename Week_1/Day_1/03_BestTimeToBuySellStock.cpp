#include <bits/stdc++.h>
using namespace std;

//Problem Link- https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0],profit=0;
        for(int i=0;i<prices.size();i++){
            int cost=prices[i]-mini;
            profit=max(cost,profit);
            mini=min(mini,prices[i]);
        }
        return profit;

    }
};