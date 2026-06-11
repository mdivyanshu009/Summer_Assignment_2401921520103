#include <bits/stdc++.h>
using namespace std;

//Problem Link - https://leetcode.com/problems/reverse-words-in-a-string-iii/

class Solution {
public:
    string reverseWords(string s) {
        int l=0,n=s.size();
        for (int i=0;i<n;i++){
            if (s[i]==' ' || i==n-1){
                int r=i-1;
                if (i==n-1) r=n-1;
                while(l<r){
                    swap(s[l],s[r]);
                    l++;
                    r--;
                }
                l=i+1;
            }

        }
        return s;
    }
};