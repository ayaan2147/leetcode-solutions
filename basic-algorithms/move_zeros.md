## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

The solution uses two pointers to move all zeroes to the end of the
array. The pointer `i` scans through the array, while `j` keeps track of
the position where the next non-zero element should be placed. Whenever a
non-zero element is found, it is swapped with the element at position
`j`.

### Complexity

- Time: O(n)
- Space: O(1) auxiliary space

### Notes

The solution moves all zeroes to the end while maintaining the relative
order of the non-zero elements. The array is modified in place without
using an additional array.