# Number Crown

## Problem

Print a number crown pattern. The current solution uses `n = 5`:

```text
1        1
12      21
123    321
1234  4321
1234554321
```

## Approach

* The outer loop controls the rows, from `1` to `n`.
* On row `i`, print numbers from `1` through `i` on the left.
* Print `2 * (n - i)` spaces to create the center gap.
* Print numbers from `i` down to `1` on the right.

## Complexity

* Time: `O(n²)`
* Space: `O(1)`

## What I Learned

* How to build a symmetric pattern from increasing and decreasing number sequences.
* How to calculate a center gap that shrinks as each row grows.
