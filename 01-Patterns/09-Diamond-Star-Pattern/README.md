# Diamond Star Pattern

## Problem

Given a number `n`, print a diamond pattern of stars.

For `n = 5`:

```text
	*
   ***
  *****
 *******
*********
 *******
  *****
   ***
	*
```

## Approach

* The upper half has `n` rows. On row `i`, print `n - i` spaces followed by `2 * i - 1` stars.
* The lower half has `n - 1` rows. On row `i`, from `1` to `n - 1`, print `i` spaces followed by `2 * (n - i) - 1` stars.
* The spaces indent each row, while the number of stars grows toward the middle and shrinks afterward.

## Complexity

* Time: `O(n²)`
* Space: `O(1)`

## What I Learned

* How to combine a pyramid and an inverted pyramid into one pattern.
* How to calculate row indentation and star counts with formulas.
