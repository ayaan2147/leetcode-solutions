## Problem: Reverse String (Easy)

**Link:** https://leetcode.com/problems/reverse-string/

### Approach

The solution uses two pointers, `left` and `right`, starting from the
beginning and end of the string. The characters at these positions are
swapped, and the pointers move toward the center until the entire string
is reversed.

### Complexity

- Time: O(n)
- Space: O(1) auxiliary space

### Notes

The string is reversed in place without creating another string. The
two-pointer approach also handles edge cases such as a single-character
string.