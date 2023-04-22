/*
[Request]
Remove All Adjacent Duplicates In String

Example 1:
  Input: s = "abbaca"
  Output: "ca"
  Explanation: 
  For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".

Example 2:
  Input: s = "azxxzy"
  Output: "ay"
*/


/*
[Sollution]
Using stack to resolve
*/

/* Code is already work on LeetCode */
class Solution {
public:
    string removeDuplicates(string s) {
        int len = s.length();
        string stack_str="";
        
        for (int i = 0; i < len; i++) {
            if (stack_str.back() == s[i]) {
                stack_str.pop_back();
            } else {
                stack_str.push_back(s[i]);
            }
        }

        return stack_str;
    }
};
