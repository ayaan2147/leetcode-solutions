## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

The solution uses an array of 26 counters to keep track of the frequency
of each lowercase English letter. For every character in the first string,
its count is increased, while the corresponding character in the second
string decreases the count. If all 26 counters are zero, the two strings
are anagrams.

### Complexity

- Time: O(n)
- Space: O(1) auxiliary space

### Notes

The solution first checks whether both strings have the same length. It
uses the character position (`s[i] - 'a'`) to map each lowercase letter
to an index from 0 to 25.