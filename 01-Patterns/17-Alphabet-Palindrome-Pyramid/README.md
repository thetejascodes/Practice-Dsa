# Alphabet Palindrome Pyramid

## Problem

Print an alphabet pyramid in which each row is a palindrome. The current solution uses `n = 5`:

```text
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
```

## Approach

* The outer loop controls the current row number from `1` to `n`.
* Leading spaces are printed before the row to center the pyramid.
* The first inner loop prints letters from `A` up to the current row letter.
* The second inner loop prints the same letters in reverse order, creating the palindrome.

## Complexity

* Time: `O(n²)`
* Space: `O(1)`

## What I Learned

* How to create a mirrored alphabet pattern using two loops.
* How to center a pattern using leading spaces.
* How to form a palindrome by printing the increasing sequence and then reversing it.
