/*
link - https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/578/

Given an array of integers, find if the array contains any duplicates. 
Your function should return true if any value appears at least twice in the array, 
and it should return false if every element is distinct.
*/

/*
    Time - O(n)
    Space - O(n)
*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        map<int, int> mp;
        for(int i=0; i<nums.size(); i++)
        {
            if(mp.find(nums[i]) != mp.end())
                return true;
            mp[nums[i]] = 1;
        }
        return false;
    }
};

/*
    Time - O(NlgN)
    Space - O(1)
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i] == nums[i-1])
                return true;
        }
        return false;
    }
};