/*
	Question link - https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/674/

					Question Description
	-----------------------------------------------------------------
	Given two arrays, write a function to compute their intersection.

	Example:
	Given nums1 = [1, 2, 2, 1], nums2 = [2, 2], return [2, 2].

	Note:
	Each element in the result should appear as many times as it shows in both arrays.
	The result can be in any order.
	Follow up:
	1. What if the given array is already sorted? How would you optimize your algorithm?
	2. What if nums1's size is small compared to nums2's size? Which algorithm is better?
	3. What if elements of nums2 are stored on disk, and the memory is limited such that 
	   you cannot load all elements into the memory at once?
	-----------------------------------------------------------------

--------------------------------	
    Time - O(n)
    Space - O(n)
--------------------------------

*/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        map<int, int> mp;
        for(int i=0; i<nums1.size(); i++)
            mp[nums1[i]]++;
        
        vector<int> ans;
        for(int i=0; i<nums2.size(); i++)
        {
            if(mp.find(nums2[i]) != mp.end() && mp[nums2[i]] > 0)
            {
                ans.push_back(nums2[i]);
                mp[nums2[i]]--;
            }
        }
        
        return ans;
    }
};

/*
Follow up:

1. If elements are alreay sorted, then we can use an algorithm of O(n) time and O(1) space complexity.
	We just need to use the merging pare algorithm of the merge sort, and if two elements comes same, then we will
	push it into the resultant array.
	Basically - sort and two pointer approach. 
	We can also use another approach as:
		a. Sort first and second array.
		b. For each element in nums2, do binary search in nums1 and mark both as invalid.
		c. keep repeating the step 2 for all elements of nums2.
2. If the size of num1 is very small, then we can make the hash of nums1 as done in the solution above. This could led to the
3.  a. If only nums2 cannot fit in memory, put all elements of nums1 into a HashMap, 
		read chunks of array that fit into the memory, and record the intersections.
	b. If both nums1 and nums2 are so huge that neither fit into the memory, sort them individually (external sort), 
	    then read 2 elements from each array at a time in memory, record intersections.