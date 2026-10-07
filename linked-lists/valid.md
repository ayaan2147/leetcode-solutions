## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

The solution uses a stack to keep track of opening brackets. When an
opening bracket is found, it is pushed onto the stack. When a closing
bracket is found, the top opening bracket is removed and checked to make
sure it matches the closing bracket.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

The solution returns false if a closing bracket does not have a matching
opening bracket. At the end, the stack must be empty for the parentheses
to be valid.