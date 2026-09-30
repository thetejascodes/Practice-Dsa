# Binary Number Triangle

## Problem

Print a triangle of alternating binary digits. The current solution uses `n = 5`:

```text
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
```

## Approach

* The outer loop controls the rows, from `1` to `n`.
* At the start of each row, initialize the value to `1` for odd rows and `0` for even rows.
* The inner loop prints one value per position, then flips it with `1 - value` to alternate between `0` and `1`.

## Complexity

* Time: `O(n²)`
* Space: `O(1)`

## What I Learned

* How to alternate between two values without a separate conditional for every position.
* How row parity can determine the starting value of a pattern.
