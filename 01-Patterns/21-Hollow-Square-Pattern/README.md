# Hollow Square Pattern

## Problem

Print a hollow square pattern of size `n` using stars. The first and last rows are completely filled, while the middle rows contain stars only at the left and right edges.

### Example

For `n = 5`, the output is:

```text
*****
*   *
*   *
*   *
*****
```

## Approach

* The outer loop controls the number of rows.
* If it is the first or last row, print `n` stars in a single line.
* Otherwise, print:
  * a star at the beginning,
  * `n - 2` spaces in the middle,
  * a star at the end.
* Move to the next line after each row.

## Complexity

* Time: `O(n²)`
* Space: `O(1)`

## What I Learned

* How to use conditional checks inside nested loops.
* How to differentiate border characters from inner spaces.
* How to translate a visual pattern into row-wise logic.
