/*
	Question link - https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/549/

					Question Description
	-----------------------------------------------------------------
	Given an array of integers, every element appears twice except for one. Find that single one.

	Note: Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
	-----------------------------------------------------------------

--------------------------------	
    Time - O()
    Space - O()
--------------------------------

*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int xor_of_all_num = 0;
        for(int i=0; i<nums.size(); i++)
            xor_of_all_num ^= nums[i];
        return xor_of_all_num;
        
    }
};