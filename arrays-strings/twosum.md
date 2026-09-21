## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

The solution uses two nested loops to check every possible pair of
elements. If the sum of two elements equals the target, their indices
are returned.

### Complexity

- Time: O(n²)
- Space: O(1) auxiliary space

### Notes

The solution handles duplicate values, such as [3, 3] with target 6.