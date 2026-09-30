# Decreasing Alphabet Triangle

## Problem

Print rows of consecutive letters starting from `A`, with one fewer letter on each row. The current solution uses `n = 5`:

```text
A B C D E
A B C D
A B C
A B
A
```

## Approach

* The outer loop controls the row length, decreasing from `n` to `1`.
* Reset the character to `A` at the start of each row.
* The inner loop prints the current character and advances to the next letter until the row is complete.

## Complexity

* Time: `O(n²)`
* Space: `O(1)`

## What I Learned

* How to use a decreasing outer loop to shorten each row.
* How incrementing a character produces consecutive letters within a row.
