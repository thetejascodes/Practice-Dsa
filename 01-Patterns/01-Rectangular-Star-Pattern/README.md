# Rectangular Star Pattern

## Problem

Given a number `n`, print a square pattern containing `n` rows and `n` stars in each row.

### Example

Input:

```text
4
```

Output:

```text
****
****
****
****
```

## Approach

* The outer loop controls the number of rows.
* The inner loop prints `n` stars for each row.
* After printing all stars in one row, `\n` moves to the next row.

## Complexity

* Time: `O(n²)`
* Space: `O(1)`

## What I Learned

* How nested loops work.
* The outer loop can control rows.
* The inner loop can control columns/elements inside each row.
* How to convert a visual pattern into loops.
