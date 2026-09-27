# Right-Angled Triangle Pattern

## Problem

Given `n`, print a right-angled triangle of stars.

### Example

Input:
4

Output:
*
**
***
****

## Approach

- The outer loop controls the rows.
- The inner loop prints stars.
- For each row, the number of stars increases by 1.
- `r <= i` makes the inner loop run `i + 1` times.

## Complexity

- Time: O(n²)
- Space: O(1)

## What I Learned

The number of elements printed by the inner loop can depend on the current row.