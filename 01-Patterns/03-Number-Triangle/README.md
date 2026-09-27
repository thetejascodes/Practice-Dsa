# Number Triangle

## Problem

Given `n`, print the following pattern.

For `n = 5`:

```text
1
12
123
1234
12345
```

## Approach

* Outer loop controls the rows.
* Inner loop prints numbers from `1` to the current row.
* `r` is printed.
* `'\n'` moves to the next line.

## Complexity

* Time: `O(n²)`
* Space: `O(1)`

## What I Learned

The inner loop can depend on the current row, and the loop variable can be printed instead of a fixed character.
