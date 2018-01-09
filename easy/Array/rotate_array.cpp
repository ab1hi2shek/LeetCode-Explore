/*
    Time - O(k*n)
    Space - O(1)
*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        k = k%n;
        
        for(int i=0; i<k; i++)
        {
            int temp = nums[n-1];
            for(int j=n-1; j>=1; j--)
                nums[j] = nums[j-1];
            nums[0] = temp;
        }
        
    }
};

/*
    Time - O(n)
    Space - O(1)
*/


class Solution {
public:
    void reverse(vector<int> &nums, int st, int end)
    {
        while(st < end)
        {
            int tmp = nums[st];
            nums[st] = nums[end];
            nums[end] = tmp;
            st++;
            end--;
        }
    }
    
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        k = k%n;
        
        reverse(nums, 0, n-1);
        reverse(nums, 0, k-1);
        reverse(nums, k, n-1);
        
    }
};