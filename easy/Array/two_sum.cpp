/*
    Question link - https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/546/

                    Question Description
    -----------------------------------------------------------------
    Given an array of integers, return indices of the two numbers such that they add up to a specific target.

    You may assume that each input would have exactly one solution, and you may not use the same element twice.

    Example:
    Given nums = [2, 7, 11, 15], target = 9,

    Because nums[0] + nums[1] = 2 + 7 = 9,
    return [0, 1].
    -----------------------------------------------------------------

--------------------------------    
    Time - O(n)
    Space - O(n)
--------------------------------

*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> v;
        map<int, int> mp;
        for(int i=0; i<nums.size(); i++)
        {
            int curr = target - nums[i];
            if(mp.find(curr) != mp.end())
            {
                v.push_back(mp[curr]);
                v.push_back(i);
                return v;
            }
            mp[nums[i]] = i;
        }
        
    }
};