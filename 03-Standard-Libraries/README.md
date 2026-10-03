# Standard Libraries & Collections — C++ STL

My notes and examples for the Standard Template Library (STL) while learning **Striver's A2Z DSA Sheet**.

## Learning Progress

* [ ] Understand what STL is
* [ ] Learn `vector`
* [ ] Learn `pair`
* [ ] Learn `stack`
* [ ] Learn `queue`
* [ ] Learn `deque`
* [ ] Learn `set` and `unordered_set`
* [ ] Learn `map` and `unordered_map`
* [ ] Learn `priority_queue`
* [ ] Learn common STL algorithms
* [ ] Understand the time complexity of common operations
* [ ] Practice using STL in DSA problems

## 1. What Is STL?

The C++ Standard Template Library (STL) provides reusable containers, algorithms, and utilities that help solve programming problems efficiently.

Instead of implementing common data structures from scratch every time, I can use standard library components.

Common headers include:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>

using namespace std;
```

## 2. Vector

A `vector` is a dynamic array that can grow or shrink in size.

```cpp
vector<int> numbers = {10, 20, 30};

numbers.push_back(40);
numbers.pop_back();

cout << numbers[0];
cout << numbers.size();
```

Important operations:

* `push_back()` — append an element
* `pop_back()` — remove the last element
* `size()` — return the number of elements
* `empty()` — check whether the vector is empty
* `clear()` — remove all elements

## 3. Pair

A `pair` stores two values together.

```cpp
pair<int, int> p = {10, 20};

cout << p.first << '\n';
cout << p.second << '\n';
```

Useful when storing related values, such as an element and its index.

## 4. Stack

A `stack` follows **LIFO** (Last In, First Out).

```cpp
stack<int> st;

st.push(10);
st.push(20);

cout << st.top();

st.pop();
```

Important operations: `push()`, `pop()`, `top()`, `empty()`, and `size()`.

## 5. Queue

A `queue` follows **FIFO** (First In, First Out).

```cpp
queue<int> q;

q.push(10);
q.push(20);

cout << q.front();

q.pop();
```

Important operations: `push()`, `pop()`, `front()`, `back()`, and `empty()`.

## 6. Set and Unordered Set

* `set` stores unique elements in sorted order.
* `unordered_set` stores unique elements without guaranteeing a particular iteration order.

```cpp
set<int> values = {3, 1, 2, 2};

for (int value : values) {
    cout << value << " ";
}
```

Output:

```text
1 2 3
```

## 7. Map and Unordered Map

* `map` stores key-value pairs ordered by key.
* `unordered_map` stores key-value pairs without guaranteeing key order.

```cpp
unordered_map<int, int> frequency;

frequency[10]++;
frequency[20]++;
frequency[10]++;

cout << frequency[10]; // 2
```

Useful for frequency counting and hashing problems.

## 8. Priority Queue

A default `priority_queue` is a max-heap: the largest element is available at the top.

```cpp
priority_queue<int> pq;

pq.push(10);
pq.push(30);
pq.push(20);

cout << pq.top(); // 30
```

## 9. Common Algorithms

```cpp
#include <algorithm>
#include <vector>
using namespace std;

vector<int> numbers = {4, 2, 5, 1, 3};

sort(numbers.begin(), numbers.end());
reverse(numbers.begin(), numbers.end());
```

Other useful functions include:

* `min(a, b)`
* `max(a, b)`
* `swap(a, b)`
* `binary_search(begin, end, value)` — requires a sorted range

## 10. Complexity Notes

| Operation                           | Typical complexity           |
| ----------------------------------- | ---------------------------- |
| Vector indexed access               | `O(1)`                       |
| Vector append with `push_back()`    | Amortized `O(1)`             |
| Stack push/pop/top                  | `O(1)`                       |
| Queue push/pop/front                | `O(1)`                       |
| Set/map search, insertion, deletion | `O(log n)`                   |
| Unordered set/map lookup            | Average `O(1)`, worst `O(n)` |
| Sorting with `std::sort()`          | `O(n log n)`                 |

Complexities can vary by operation and implementation; revisit them as you learn each container.

## My Learning Rule

For each STL component, I will understand:

1. What it does.
2. When to use it.
3. Its important operations.
4. Its time complexity.
5. A small C++ example.
6. A DSA problem where it is useful.

**Source:** C++ Standard Library and the Standard Libraries & Collections section of Striver's A2Z DSA Sheet.
