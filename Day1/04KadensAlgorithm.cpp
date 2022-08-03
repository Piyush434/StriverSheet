#include<climits>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        // O(n) solution by Kaden's algorithm
        int currSum = 0;
        int maxSum = INT_MIN;
        for(int i=0;i<nums.size();i++) {
            currSum += nums[i];
            if(currSum > maxSum) maxSum = currSum;
            if(currSum < 0) currSum = 0;
        }
        // if(maxSum<0) return 0;
        return maxSum;

        // ---> O(n2) Solution


        // int currSum = 0;
        // int maxSum = INT_MIN;
        // for(int i=0;i<nums.size();i++) {
        //     currSum = 0;
        //     for(int j = i;j<nums.size();j++) {
        //         currSum += nums[j]; 
        //         if(currSum > maxSum) maxSum = currSum;
        //     }
        // }
        // return maxSum;
    }
};