#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) { 
        int s = 0;  // Initializes a variable s with value 0, representing the start index 
        int e = nums.size()-1; //Initializes a variable e with the value of the last index 
        int mid  = s+(e-s)/2; //initialise midpoint you can also do (s+e)/2 
       
        while(s<=e){  
            if(nums[mid]==target){  // Checks if the value at the midpoint index of the array is equal to the target value.
                return mid;  // If the target is found at the midpoint, returns the index of the midpoint.
            }
            
            if(target<nums[mid]){  // Checks if the target value is less than the value at the midpoint.
                e=mid-1;  // If the target is less than the value at the midpoint, updates the end index to be the index before the current midpoint.
            } else {
                s=mid+1;  // If the target is greater than the value at the midpoint, updates the start index to be the index after the current midpoint.
            }
            mid = (s+e)/2;  // Recalculates the midpoint based on the updated start and end indices for the next iteration of the loop.
        }
        
        return s;  // Returns the start index, indicating the position where the target should be inserted if it's not found in the vector (or it can also return e+1).
    }
};
