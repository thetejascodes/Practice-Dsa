# Concentric Number Square

## Problem

Print a square pattern where each element represents its distance from the nearest border. The outermost layer contains the highest number, and the values decrease toward the center.

### Example

For `n = 5`, the output is:

```text
5 5 5 5 5 5 5 5 5
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 2 1 2 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5
```

## Approach

* The pattern size is `2 * n - 1`.
* For every cell, compute the distance to the top, bottom, left, and right edges.
* Take the minimum of those four distances.
* The value at that position is `n - minimum`.
* This creates concentric square layers from the outer edge to the center.

## Complexity

* Time: `O(n²)`
* Space: `O(1)`

## What I Learned

* How to build patterns using distance from boundaries.
* How to use the minimum distance to create concentric layers.
* How nested loops can generate structured number-based shapes.
