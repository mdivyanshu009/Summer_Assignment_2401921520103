#include <bits/stdc++.h>
using namespace std;

//Problem Link- https://leetcode.com/problems/maximum-average-subarray-i/

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double windowsum=0;
        for(int i=0;i<k;i++){
            windowsum+=nums[i];
        }
        double maxsum=windowsum;
        
        for(int i=k;i<n;i++){
            windowsum+=nums[i]-nums[i-k];
            maxsum = max(maxsum, windowsum);
        }
        return maxsum/k;

    }
};