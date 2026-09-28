# Number Repetition

## Problem

Given `n`, print the following pattern.

For `n = 5`:

```text
1
22
333
4444
55555
```

## Approach

* Outer loop controls the rows.
* Inner loop prints the current row number.
* `r` controls how many times the number is printed.
* `'\n'` moves to the next line.

## Complexity

* Time: `O(n²)`
* Space: `O(1)`

## What I Learned

`i` represents the current row and the number to print, while `r` controls how many times that number is repeated.
