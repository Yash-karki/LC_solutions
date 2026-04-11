// https://leetcode.com/problems/minimum-operations-to-transform-array-into-alternating-prime/description/

/*
Approach:
1. traverse in the array
    2. check whther the index is even or odd 
        3. if even 
            4. check the element at that index  is prime or not
                5. if not prime find the nearest next prime(not previous)
                6. add the difference of nearest prime and element to a variable storing operations
        7. else //odd
            8. check the element at that index is prime or not
                9. if prime find the next nearest non prime
                10. add the difference of neareset non prime and element to a variable storing operations
11. return operations


*/


class Solution {
public:
    bool IsPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }

    int nextPrime(int n) {
        while (true) {
            if (IsPrime(n)) return n;
            n++;
        }
    }

    int nextNonPrime(int n) {
        while (true) {
            if (!IsPrime(n)) return n;
            n++;
        }
    }

    int minOperations(vector<int>& nums) {
        int ops = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                if (!IsPrime(nums[i])) {
                    int next = nextPrime(nums[i]);
                    ops += (next - nums[i]);
                }
            } else {
                if (IsPrime(nums[i])) {
                    int next = nextNonPrime(nums[i]);
                    ops += (next - nums[i]);
                }
            }
        }
        return ops;
    }
};