# Increasing Number Triangle

## Problem

Print consecutive integers in a triangle. The current solution uses `n = 5`:

```text
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
```

## Approach

* The outer loop controls the rows, printing `i` numbers on row `i`.
* Initialize `value` to `1` before the loops begin.
* Print `value` at each position, then increment it. Keep the value across rows so the sequence continues without restarting.

## Complexity

* Time: `O(n²)`
* Space: `O(1)`

## What I Learned

* How a counter declared outside the loops can preserve state between rows.
* How to use the row number to control how many values each line contains.
