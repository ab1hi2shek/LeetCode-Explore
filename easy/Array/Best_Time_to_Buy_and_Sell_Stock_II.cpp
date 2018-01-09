/*
    Time - O(n)
    Space - O(1)
*/

class Solution {
public:
    int maxProfit(vector<int>& arr) {
        
        int n = arr.size();
        int i=0, ans = 0;
        int peak = 0, valley = 0;
        while(i<n-1)
        {
            while(i<n-1 && arr[i] >= arr[i+1])
                i++;
            valley = arr[i];
            
            while(i<n-1 && arr[i] <= arr[i+1])
                i++;
            peak = arr[i];
            cout<<peak<<" "<<valley<<endl;
            ans += (peak - valley);
        }
        return ans;
    }
};