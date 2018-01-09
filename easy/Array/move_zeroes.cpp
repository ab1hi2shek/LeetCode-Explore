/*
	Question link - https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/567/

					Question Description
	-----------------------------------------------------------------
	Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

	For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].

	Note:
	You must do this in-place without making a copy of the array.
	Minimize the total number of operations.
	-----------------------------------------------------------------

--------------------------------	
    Time - O(n)
    Space - O(1)
--------------------------------

*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int n = nums.size();
        int i = 0;
        
        while(i < n && nums[i] != 0)
            i++;
        int j = i+1;
        
        while(j < n)
        {
            if(nums[j] == 0)
                j++;
            else
            {
                swap(nums[i++], nums[j++]);
            }
        }
    }
};