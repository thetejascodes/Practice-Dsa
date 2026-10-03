# Time Complexity & Space Complexity

Notes and examples from the Time Complexity section of **Striver's A2Z DSA Sheet**.

## Learning Progress

* [ ] Understand time complexity
* [ ] Understand input size (`n`)
* [ ] Learn Big-O notation
* [ ] Understand constant time — `O(1)`
* [ ] Understand linear time — `O(n)`
* [ ] Understand quadratic time — `O(n²)`
* [ ] Understand logarithmic time — `O(log n)`
* [ ] Analyze nested loops
* [ ] Analyze consecutive loops
* [ ] Understand best, average, and worst cases
* [ ] Understand space complexity
* [ ] Practice analyzing code snippets

## 1. What Is Time Complexity?

Time complexity describes how the number of operations performed by an algorithm grows as the input size increases.

It does not measure the exact execution time in seconds. Instead, it describes the growth rate of an algorithm.

## 2. Common Time Complexities

| Complexity   | Name         | Example                    |
| ------------ | ------------ | -------------------------- |
| `O(1)`       | Constant     | Accessing an array element |
| `O(log n)`   | Logarithmic  | Binary search              |
| `O(n)`       | Linear       | Traversing an array        |
| `O(n log n)` | Linearithmic | Merge sort                 |
| `O(n²)`      | Quadratic    | Two nested loops           |
| `O(2ⁿ)`      | Exponential  | Some recursive algorithms  |

## 3. Example: Constant Time — O(1)

```cpp
int number = 10;
cout << number;
```

The number of operations does not grow with the input size.

## 4. Example: Linear Time — O(n)

```cpp
for (int i = 0; i < n; i++) {
    cout << i << " ";
}
```

The loop executes `n` times.

**Time Complexity:** `O(n)`

## 5. Example: Quadratic Time — O(n²)

```cpp
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        cout << i << " " << j << '\n';
    }
}
```

The inner loop executes `n` times for each of the `n` outer-loop iterations.

**Time Complexity:** `O(n²)`

## 6. Space Complexity

Space complexity describes how the memory requirements of an algorithm grow with the input size.

Example:

```cpp
int number = 10;
```

The additional space used is constant: `O(1)`.

## 7. My Analysis Notes

For every code snippet I analyze, I will record:

1. Input size (`n`).
2. Number of loop iterations.
3. Total number of operations or how they grow.
4. Final time complexity.
5. Additional space complexity.

## Key Takeaway

Focus on understanding how the number of operations grows as the input size increases. Do not memorize complexities without understanding the code.

**Source:** Striver's A2Z DSA Sheet — Time Complexity section.
