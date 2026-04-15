// https://leetcode.com/problems/minimum-distance-between-three-equal-elements-i/?envType=daily-question&envId=2026-04-10



#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                for(int k = j+1; k<n; k++){
                    if((nums[i] == nums[j]) && (nums[j] == nums[k])){
                        ans = min(ans,(abs(i-j)+abs(j-k)+abs(k-i)));
                    }
                }
            }
        }
        if(ans == INT_MAX){
            return -1;
        }else{
            return ans;
        }
    }
};

// optimal solution will be uploaded soon