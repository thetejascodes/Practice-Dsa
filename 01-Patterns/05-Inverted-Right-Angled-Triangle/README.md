# Inverted Right-Angled Triangle

## Problem

Given `n`, print the following pattern.

For `n = 5`:

```text
*****
****
***
**
*
```

## Approach

* Outer loop controls the rows.
* `i` starts from `n` and decreases by `1`.
* Inner loop prints `*` from `1` to `i`.
* `'\n'` moves to the next line.

## Complexity

* Time: `O(n²)`
* Space: `O(1)`

## What I Learned

The outer loop can also run in decreasing order. Here, `i` represents the current number of stars, so the pattern decreases by one star on every row.
