## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

The solution keeps track of the minimum stock price seen so far and
calculates the possible profit for each price. If the current price is
lower than the minimum price, the minimum price is updated. The maximum
profit found during the process is stored and returned.

### Complexity

- Time: O(n)
- Space: O(1) auxiliary space

### Notes

The stock must be bought before it is sold. The solution scans the prices
from left to right, ensuring that the selling day always comes after the
buying day.