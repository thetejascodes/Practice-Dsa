# Increasing Reverse Alphabet Triangle

## Problem

Print a triangle of letters where each row starts one letter earlier than the previous row and continues in increasing alphabetical order. The current solution uses `n = 5`:

```text
E
D E
C D E
B C D E
A B C D E
```

## Approach

* The outer loop controls the row number from `1` to `n`.
* At the start of each row, set the first character to `'A' + (n - i)`.
* Print `i` characters, increasing the character after each one.

## Complexity

* Time: `O(n²)`
* Space: `O(1)`

## What I Learned

* How to calculate a row's starting letter from its position.
* How nested loops can build a triangle with a changing alphabet sequence.
