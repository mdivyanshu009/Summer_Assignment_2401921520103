#include <bits/stdc++.h>
using namespace std;

//Problem Link- https://leetcode.com/problems/longest-common-prefix/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if (strs.empty()) return "";
        string ans = "";
        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs[n-1]; 
        int mini = min(first.length(), last.length());
        for(int i = 0; i < mini; i++){
            if(first[i]!=last[i]){
                break;
            }
            else{
                ans.push_back(first[i]);
            }
        }
        return ans;
    }
};