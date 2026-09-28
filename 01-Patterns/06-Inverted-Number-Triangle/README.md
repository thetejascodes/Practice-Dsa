# Inverted Number Triangle

## Problem

Given `n`, print the following pattern.

For `n = 5`:

```text
12345
1234
123
12
1
```

## Approach

* Outer loop controls the rows.
* `i` starts from `n` and decreases by `1`.
* Inner loop prints numbers from `1` to `i`.
* `r` is printed.
* `'\n'` moves to the next line.

## Complexity

* Time: `O(n²)`
* Space: `O(1)`

## What I Learned

The outer loop can decrease while the inner loop starts from `1` and prints numbers up to the current value of `i`.
