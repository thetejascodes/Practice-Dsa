# Butterfly Star Pattern

## Problem

Print a butterfly-shaped star pattern using `n = 5`. The pattern is symmetric and grows from the top row to the center, then shrinks again.

```text
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
```

## Approach

* The first loop prints the upper half of the butterfly.
* Each row increases the number of stars on the left and right sides.
* The middle row has the maximum number of stars and the largest width.
* The second loop prints the lower half in reverse order.
* The spaces between the two wings increase and decrease to create the butterfly shape.

## Complexity

* Time: `O(n²)`
* Space: `O(1)`

## What I Learned

* How to build a mirrored pattern using nested loops.
* How to control both the star count and spacing across rows.
* How to split a pattern into upper and lower halves while keeping it symmetric.
