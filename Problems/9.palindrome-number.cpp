/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 *
 * https://leetcode.com/problems/palindrome-number/description/
 *
 * algorithms
 * Easy (57.62%)
 * Likes:    13010
 * Dislikes: 2764
 * Total Accepted:    5.3M
 * Total Submissions: 9.2M
 * Testcase Example:  '121'
 *
 * Given an integer x, return true if x is a palindrome, and false
 * otherwise.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: x = 121
 * Output: true
 * Explanation: 121 reads as 121 from left to right and from right to left.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: x = -121
 * Output: false
 * Explanation: From left to right, it reads -121. From right to left, it
 * becomes 121-. Therefore it is not a palindrome.
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: x = 10
 * Output: false
 * Explanation: Reads 01 from right to left. Therefore it is not a
 * palindrome.
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * -2^31 <= x <= 2^31 - 1
 * 
 * 
 * 
 * Follow up: Could you solve it without converting the integer to a string?
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        bool pal = false;
        if (x<0) return false;
        if (x==0) return true;
        int y = x;
        float reversed = 0;

        while (y>0) {
            int lastdigit = y%10;
            reversed = reversed * 10 + lastdigit;
            y = y/10;
            if (reversed == x) {
                pal= true;
                break;
            } 
        }

        return pal;
    }
};
// @lc code=end

