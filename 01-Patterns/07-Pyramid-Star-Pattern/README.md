# Pyramid Star Pattern

## Problem

Given a number `n`, print a pyramid pattern of stars where each row contains an odd number of stars, increasing from top to bottom.

### Example

Input:

```text
4
```

Output:

```text
   *
  ***
 *****
*******
```

## Approach

* The outer loop controls the number of rows.
* For each row, we print `n - i` spaces on the left to center the pyramid.
* Then we print `2 * i - 1` stars to form the row.
* This creates a symmetric pyramid with two more star in each successive row.

## Complexity

* Time: `O(n²)`
* Space: `O(1)`

## What I Learned

* How to use nested loops to build patterns.
* How spacing affects alignment in star-based patterns.
* How to convert a visual shape into a mathematical row formula.
