#include <bits/stdc++.h>
using namespace std;

//Problem Link - https://leetcode.com/problems/find-all-anagrams-in-a-string/

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans={};
        int n1=s.size(),n2=p.size();
        if (n1<n2) return ans;
        vector <int> pfreq(26,0);
        vector <int> sfreq(26,0);
        
        for(int i=0;i<n2;i++){
            pfreq[p[i]-'a']++;
            sfreq[s[i]-'a']++;
        }
        if (sfreq==pfreq) ans.push_back(0);
        for(int i=n2;i<n1;i++){
            sfreq[s[i]-'a']++;
            sfreq[s[i-n2]-'a']--;
            if(sfreq==pfreq) ans.push_back(i-n2+1);
        }
        return ans;
    }
};