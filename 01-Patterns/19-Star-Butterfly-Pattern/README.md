# Star Butterfly Pattern

## Problem

Print a butterfly-shaped star pattern using `n = 5`. The pattern is symmetric and contains a larger gap in the middle, making it look like a butterfly.

```text
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
```

## Approach

* The outer loop controls the row number.
* In each row, print stars on the left side and right side.
* The number of stars decreases from the top to the middle and then increases again.
* The gap between the two halves expands in the center and shrinks toward the bottom.

## Complexity

* Time: `O(n²)`
* Space: `O(1)`

## What I Learned

* How to create symmetric patterns using nested loops.
* How to control both the number of stars and the spacing in the same row.
* How to mirror a pattern across the center by using a decreasing-then-increasing pattern.
