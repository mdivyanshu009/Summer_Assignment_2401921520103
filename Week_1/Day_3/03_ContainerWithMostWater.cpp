#include <bits/stdc++.h>
using namespace std;

//Problem Link - https://leetcode.com/problems/container-with-most-water/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int width,hght;
        int lb=0,rb=n-1,maxarea=INT_MIN;
        while(lb<rb){
            width=rb-lb;
            hght=min(height[lb],height[rb]);
            maxarea=max(maxarea,hght*width);
            if (height[lb]<height[rb]){
                lb++;
            }
            else rb--;
        }
        return maxarea;
    }
};