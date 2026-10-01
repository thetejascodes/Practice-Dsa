# Repeated Alphabet Triangle

## Problem

Print a triangle where each row contains the same alphabet repeated as many times as its row number. The current solution uses `n = 5`:

```text
A
B B
C C C
D D D D
E E E E E
```

## Approach

* The outer loop controls the row number from `1` to `n`.
* The current character is stored in `ch` and is incremented after each row.
* The inner loop prints the same character exactly `i` times for the current row.

## Complexity

* Time: `O(n²)`
* Space: `O(1)`

## What I Learned

* How to print the same character repeatedly in a row.
* How to increment a character to move from `A` to `B` to `C` across rows.
