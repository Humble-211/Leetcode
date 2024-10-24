/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 *
 * https://leetcode.com/problems/valid-parentheses/description/
 *
 * algorithms
 * Easy (41.11%)
 * Likes:    24462
 * Dislikes: 1808
 * Total Accepted:    5.1M
 * Total Submissions: 12.5M
 * Testcase Example:  '"()"'
 *
 * Given a string s containing just the characters '(', ')', '{', '}', '[' and
 * ']', determine if the input string is valid.
 *
 * An input string is valid if:
 *
 *
 * Open brackets must be closed by the same type of brackets.
 * Open brackets must be closed in the correct order.
 * Every close bracket has a corresponding open bracket of the same type.
 *
 *
 *
 * Example 1:
 *
 *
 * Input: s = "()"
 *
 * Output: true
 *
 *
 * Example 2:
 *
 *
 * Input: s = "()[]{}"
 *
 * Output: true
 *
 *
 * Example 3:
 *
 *
 * Input: s = "(]"
 *
 * Output: false
 *
 *
 * Example 4:
 *
 *
 * Input: s = "([])"
 *
 * Output: true
 *
 *
 *
 * Constraints:
 *
 *
 * 1 <= s.length <= 10^4
 * s consists of parentheses only '()[]{}'.
 *
 *
 */

// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
        bool ret = false;
        /*
        int a = 0, aa = 0, b = 0, bb = 0, c = 0, cc = 0;
        for (int i = 0; i < s.length(); i++)
        {
            switch (s.at(i))
            {
            case '{':
                a++;
                break;
            case '}':
                aa++;
                break;
            case '[':
                b++;
                break;
            case ']':
                bb++;
                break;
            case '(':
                c++;
                break;
            case ')':
                cc++;
                break;
            }
        }
        if (a == aa && b == bb && c == cc)
            ret = true;

        */
       // ^ this method wont work if s = "([)]"...
       // isValid(s) should return false
        if (s.length() <2)
            return ret;
        int mid = s.length()/2;

       for (int i = mid; i >0; i--) {
        switch (s.at(i))
            {
            case '{':
                a++;
                break;
            case '}':
                aa++;
                break;
            case '[':
                b++;
                break;
            case ']':
                bb++;
                break;
            case '(':
                c++;
                break;
            case ')':
                cc++;
                break;
            }


       }
        return ret;
    }
};
// @lc code=end
