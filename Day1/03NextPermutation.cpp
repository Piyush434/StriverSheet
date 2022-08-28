#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
//     void allPermutations(vector<int>& nums,vector<vector<int>> ans,int index) {
//         if(index == nums.size()-1) {
//             ans.push_back(nums);
//         }
        
//         for(int i=index;i<nums.size;i++) {
//             swap(nums[index],nums[i]);
//             allPermutation(nums,ans,index+1);
//             swap(nums[index],nums[i]);
//         }
//     }
    
    void reverseArray(vector<int>& arr,int start,int end) {
        int i = start;
        int j = end;
        while(i<j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    
    void swapTwo(int& a,int& b) {
        int temp =a;
        a = b;
        b = temp;
    }
    
    
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i;
        for(i=n-2;i>=0;i--) {
            if(nums[i]< nums[i+1]) break;
        }
        /*
        Case 1: Highest Permutation
        3 2 1 -> 1 2 3
        
        Case 2:
         step1: search->swap
         step2: reverse
        */
        if(i<0) {
            reverseArray(nums,0,n-1);
        }
        else {
            int k;
            for(k = n-1;k>i;k--) {
                if(nums[k]>nums[i]) break;
            }
            
            swapTwo(nums[k],nums[i]);
            // Reverse from i onwards
            reverseArray(nums,i+1,n-1);
        }
    }
};