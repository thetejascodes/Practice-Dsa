# Half Diamond Star Pattern

## Problem

Print a left-aligned half-diamond pattern of stars. The current solution uses `n = 5`:

```text
*
**
***
****
*****
****
***
**
*
```

## Approach

* The first loop prints rows from `1` to `n`, adding one star on each row.
* The second loop prints rows from `n - 1` down to `1`, removing one star on each row.
* Starting the second loop at `n - 1` avoids printing the widest row twice.

## Complexity

* Time: `O(n²)`
* Space: `O(1)`

## What I Learned

* How to combine an increasing and decreasing right-angled triangle.
* How nested loops control the number of stars printed on each row.
