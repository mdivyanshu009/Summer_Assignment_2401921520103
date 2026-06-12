#include <bits/stdc++.h>
using namespace std;

//Problem Link - https://leetcode.com/problems/longest-palindromic-substring/

class Solution {
public:
    int expand(string s, int left, int right) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }
        return right - left - 1;
    }
    string longestPalindrome(string s) {
        if (s.length() < 1) return "";
        
        int start = 0;
        int maxLen = 0;
        
        for (int i = 0; i < s.length(); i++) {
            int len1 = expand(s, i, i);
            int len2 = expand(s, i, i + 1);
            int currentMax = max(len1, len2);
            if (currentMax > maxLen) {
                maxLen = currentMax;
                start = i - (currentMax - 1) / 2;
            }
        }
        return s.substr(start, maxLen);
    }
};