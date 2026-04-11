
// https://leetcode.com/problems/count-digit-appearances/description/

/*
approach:
1. array ko traverse karo
2. array ke har ek element ko ek variable me store karo
3. jo number variable me store kiya usme occurrance find karo
4. agar occurance found hua to counter badha do
5. count ko return krdo
*/


class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int n = nums.size();
        int cnt = 0;
        for(int i = 0; i<n; i++){
            int dig = nums[i];
            while(dig != 0){
                int num = dig%10;
                dig = dig/10;
                if(num == digit){
                    cnt ++;
                }
            }
        }
        return cnt;
    }
};