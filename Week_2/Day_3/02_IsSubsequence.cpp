#include <bits/stdc++.h>
using namespace std;

//Problem Link - https://leetcode.com/problems/is-subsequence/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l=0,r=0;
        while(l<s.size() && r< t.size()){
            if(s[l]==t[r]){
                l++;
                r++;
            }
            else if(s[l]!=t[r]){
                r++;
            }
        }
        if(l==s.size()) return true;
        return false;
    }
};