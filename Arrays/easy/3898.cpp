// https://leetcode.com/problems/find-the-degree-of-each-vertex/description/

/*
No graph knowledge is required
1. traverse the array using nested loops
    2. inside 1st loop initialise a counter variable to 0 to count number of 1's on that index
        3. inside 2nd loop check whther element at that index is 1 or 0
            4. if 1 increment the counter variable
        5. outside 2nd loop  push the value of counter in an answer array
6. return answer array

*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> ans;
        for(int i = 0; i<n; i++){
            int cnt = 0;
            for(int j = 0; j<m; j++){
                if(matrix[i][j] == 1){
                    cnt++;
                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};