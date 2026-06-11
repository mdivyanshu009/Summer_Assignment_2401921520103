#include <bits/stdc++.h>
using namespace std;

//Problem Link - https://leetcode.com/problems/decode-string/


class Solution {
public:
    string decodeString(string s) {
        int i = 0;
        return helper(s, i);

    }
        
    string helper(string &s,int &i){
        string current_str = "";
        int k = 0;

        while (i < s.length()) {
            char ch = s[i];
            if (isdigit(ch)) {
                k = k * 10 + (ch - '0');
                i++;
            } 
            else if (ch == '[') {
                i++;
                string inner_str = helper(s, i);
                while (k > 0) {
                    current_str += inner_str;
                    k--;
                }
            } 
            else if (ch == ']') {
                i++;
                return current_str;
            } 
            else {
                current_str += ch;
                i++;
            }
        }
        return current_str; 
    }
};