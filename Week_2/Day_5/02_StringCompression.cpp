#include <bits/stdc++.h>
using namespace std;

//Problem Link - https://leetcode.com/problems/string-compression/

class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        if (n == 0) return 0;
        
        int write = 0;
        int read = 0;
        while (read < n) {
            char current = chars[read];
            int count = 0;
            while (read < n && chars[read] == current) {
                read++;
                count++;
            }
            chars[write++] = current;
            if (count > 1) {
                string countStr = to_string(count);
                for (char c : countStr) {
                    chars[write++] = c;
                }
            }
        }
        
        return write;
    }
};