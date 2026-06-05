#include <bits/stdc++.h>
using namespace std;

//Problem Link- https://leetcode.com/problems/reverse-string/

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int j=n-1,i=0;
        while(i<j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
    }
};