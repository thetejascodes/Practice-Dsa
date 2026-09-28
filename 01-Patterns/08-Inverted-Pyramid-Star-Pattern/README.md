# Inverted Pyramid Star Pattern

## Problem

Given a number `n`, print an inverted pyramid pattern of stars.

For `n = 5`:

```text
*********
 *******
  *****
   ***
    *
```

## Approach

* The outer loop controls the number of rows.
* `i` increases from `1` to `n`.
* For each row, we print `i - 1` spaces.
* Then we print `2 * n - 2 * i + 1` stars.
* The number of spaces increases by `1` while the number of stars decreases by `2` on each row.

## Complexity

* Time: `O(n²)`
* Space: `O(1)`

## What I Learned

* How to create an inverted pyramid using nested loops.
* How to calculate increasing spaces and decreasing stars.
* How to derive formulas from the pattern instead of hardcoding values.
