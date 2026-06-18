#include <bits/stdc++.h>
using namespace std;

//Problem Link- https://leetcode.com/problems/daily-temperatures/

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n, 0);
        stack<int> st;
        
        for (int i = 0; i < n; i++) {
            while (!st.empty() && temperatures[st.top()] < temperatures[i]) {
                int prevIndex = st.top();
                ans[prevIndex] = i - prevIndex;
                st.pop();
            }
            st.push(i);
        }
        
        return ans;
    }
};