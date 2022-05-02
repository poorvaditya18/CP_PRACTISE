// Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.

// Return any array that satisfies this condition.

#include<iostream>
#include<vector>

using namespace std;

class Solution 
{
public:
    vector<int> sortArrayByParity(vector<int>& nums)
    {
        
        int i = 0;
        int j = nums.size() - 1;
        
        while(i < j)
        {
            //odd is there and then even is there swap them 
            if(nums[i] % 2 > nums[j] % 2){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
            //if even is at right increment i
            if(nums[i] % 2 == 0) i++;
            if(nums[j] % 2 != 0) j--; //if odd is at right decrement j
        }
        

        return nums;
    }
};