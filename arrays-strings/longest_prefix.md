## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

The solution starts by assuming the first string is the common prefix.
It then compares this prefix with each remaining string character by
character using a `while` loop. When the characters no longer match,
`substr()` is used to keep only the matching part of the prefix.

### Complexity

- Time: O(n × m)
- Space: O(m)

### Notes

The solution handles cases where there is no common prefix by returning
an empty string. The `substr(0, j)` function keeps the first `j`
characters of the current prefix.