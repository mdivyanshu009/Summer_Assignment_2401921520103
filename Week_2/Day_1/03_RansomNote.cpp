#include <bits/stdc++.h>
using namespace std;

//Problem Link- https://leetcode.com/problems/ransom-note/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>freq(26,0);
        if(magazine.size()<ransomNote.size()) return false;
        for(int i=0;i<magazine.size();i++){
            freq[magazine[i]-'a']++;
        }
        for(int i=0;i<ransomNote.size();i++){
            if (freq[ransomNote[i] - 'a'] == 0) {
                return false;
            }
            freq[ransomNote[i] - 'a']--;
        }
        return true;
    }
};