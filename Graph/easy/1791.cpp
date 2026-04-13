// https://leetcode.com/problems/find-center-of-star-graph/description/?envType=problem-list-v2&envId=graph

/*
basic idea - centre of graph vo hota h jo ki har node se connected h
Approach:
1. compare index 0 and 1 for any common element
2. if any element is common then it will be the answer because centre node har node se connected hogi to vo index 0 or 1 me common hogi 
3 return the common element
*/


class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        if(edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1]){
            return edges[0][0];
        }

        return edges[0][1];
    }
};
