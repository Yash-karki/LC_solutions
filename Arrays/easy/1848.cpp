// https://leetcode.com/problems/minimum-distance-to-the-target-element/description/?envType=daily-question&envId=2026-04-13

/*
Approch:
1. set the answer variable to INT_MAX
2.traverse through the array
    3. check the conditon (nums[i] == target)
        4 if condtion satisfy set the ans varable to min(ans, abs(i-start)) //because humko minmised abs(i-start) find krna hai
5. return ans

*/




class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int n = nums.size();
        int ans = INT_MAX;
        for(int i = 0; i<n; i++){
            if(nums[i] == target){
                ans = min(ans,abs(i-start));
            }
        }
        
        return ans;
    }
};