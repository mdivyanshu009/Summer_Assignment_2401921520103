#include <bits/stdc++.h>
using namespace std;

//Problem Link - https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) {
            return 0;
        }
        int m = haystack.size();
        int n = needle.size();
        if (n > m) {
            return -1;
        }
        for (int i = 0; i <= m - n; ++i) {
            if (haystack.substr(i, n) == needle) {
                return i;
            }
        }
        return -1;
    }
};