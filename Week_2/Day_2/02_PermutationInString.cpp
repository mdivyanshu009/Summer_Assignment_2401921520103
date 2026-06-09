#include <bits/stdc++.h>
using namespace std;

//Problem Link - https://leetcode.com/problems/permutation-in-string/

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1=s1.size(),n2=s2.size();
        vector<int>s1freq(26,0);
        vector<int>s2freq(26,0);
        if(n1 > n2) return false;
        for(int i=0;i<n1;i++){
            s1freq[s1[i]-'a']++;
            s2freq[s2[i]-'a']++;
        }
        if (s1freq==s2freq)return true;
        for(int i=n1;i<n2;i++){
            s2freq[s2[i] - 'a']++;
            s2freq[s2[i - n1] - 'a']--;
            if(s1freq==s2freq) return true;
        }
        return false;
        
    }
};