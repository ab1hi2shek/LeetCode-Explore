/*
	Question link - https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/559/

					Question Description
	-----------------------------------------------------------------
	Given a non-negative integer represented as a non-empty array of digits, plus one to the integer.

	You may assume the integer do not contain any leading zero, except the number 0 itself.

	The digits are stored such that the most significant digit is at the head of the list.
	-----------------------------------------------------------------

--------------------------------	
    Time - O(n)
    Space - O(1)
--------------------------------

*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        reverse(digits.begin(), digits.end());
        
        int sum = 1 + digits[0];
        int carry = sum / 10;
        sum = sum % 10;
        digits[0] = sum;
        
        int i = 1;
        while(carry > 0 && i < digits.size())
        {
            digits[i] = (digits[i] + carry);
            carry = digits[i] / 10;
            digits[i] = digits[i] % 10;
            i++;
        }
        
        if(carry)
            digits.push_back(1);
        
        reverse(digits.begin(), digits.end());
        
        return digits;
    }
};