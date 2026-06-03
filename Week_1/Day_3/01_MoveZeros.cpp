#include <bits/stdc++.h>
using namespace std;

//ProblemLink - https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int writer = 0;
        for (int reader = 0;reader <nums.size(); reader++) {
            if (nums[reader] != 0) {
                nums[writer] = nums[reader];
                writer++;
            }
        }
        
        while (writer < nums.size()) {
            nums[writer] = 0;
            writer++;
        }
    }
};