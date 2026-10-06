## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

The solution uses two pointers, `left` and `right`, to search through the
sorted array. The middle element is checked against the target. If the
middle element is smaller than the target, the search continues in the
right half; if it is larger, the search continues in the left half.

### Complexity

- Time: O(log n)
- Space: O(1) auxiliary space

### Notes

Binary Search works only when the array is sorted. The search space is
divided into half after every comparison, making it more efficient than
a linear search for large sorted arrays.