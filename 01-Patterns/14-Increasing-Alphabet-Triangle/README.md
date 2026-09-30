# Increasing Alphabet Triangle

## Problem

Print an alphabet triangle that begins each row with `A`. The current solution uses `n = 5`:

```text
A
A B
A B C
A B C D
A B C D E
```

## Approach

* The outer loop controls the rows, printing `i` letters on row `i`.
* Reset the character to `A` at the start of each row.
* The inner loop prints the current character and increments it to the next letter.

## Complexity

* Time: `O(n²)`
* Space: `O(1)`

## What I Learned

* How character values can be incremented to print consecutive letters.
* How resetting a value for each outer-loop iteration changes the pattern.
