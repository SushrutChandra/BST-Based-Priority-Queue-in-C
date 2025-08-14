# BST-Based Priority Queue in C

**Author:** Sushrut Chandra

## Overview
This project implements a **priority queue** in C using a **binary search tree (BST)**. Each element consists of a string and a unique, nonnegative priority. The BST ensures efficient insertion, removal, and retrieval of elements based on their priority.

The queue supports typical operations such as `enqueue`, `dequeue`, `peek`, and memory-safe traversal. Additional functionality includes changing element priorities, removing elements in a priority range, and retrieving all elements in priority order.

---

## Features

### Queue Initialization & Management
- `init()` – Initialize an empty priority queue
- `clear()` – Free all dynamically allocated memory in the queue
- `is_empty()` – Check if the queue is empty
- `size()` – Get the number of elements

### Insertion & Removal
- `enqueue(element, priority)` – Add an element with a specific priority
- `dequeue()` – Remove and return the element with the highest priority
- `peek()` – Return the element with the highest priority without removing it

### Priority & Element Utilities
- `get_all_elements()` – Return a deep copy of all elements in descending priority order
- `get_priority(element)` – Get the highest priority of a given element
- `change_priority(element, new_priority)` – Change the priority of a specific element
- `remove_elements_between(low, high)` – Remove all elements within a priority range

### Memory Management
- Safe deep copying of strings for all stored elements
- Helper functions to free arrays and nodes (`free_name_list`, `clear`, `free_node`)

---

## Files

| File | Description |
|------|-------------|
| `prio-q-datastructure.h` | Defines `Node` and `Prio_que` structures |
| `prio-q.h` | Public API for the priority queue |
| `prio-q.c` | Implementation of all priority queue functions and helper functions |
| `compare-name-lists.h` | Utility function prototype for testing element arrays |
| `test1.c` | Test: verifies empty queue initialization |
| `test2.c` | Test: verifies enqueue and dequeue order |
| `Makefile` | Build system for compiling tests and queue |

---

## Compilation

Use the provided `Makefile`:

```bash
make all        # Compiles test1.x and test2.x
make clean      # Removes object files and executables
The Makefile uses the following flags for safety and standard compliance:

-ansi -pedantic-errors -Wall -Werror -fstack-protector-all

Running Tests
bash
Copy
Edit
./test1.x
# Output: Every assertion succeeded resoundingly!

./test2.x
# Output: Every assertion succeeded resoundingly!
Both tests ensure that:

The queue initializes correctly.

Elements are removed in descending priority order.

Queue operations work as expected.

Usage Example
c
Copy
Edit
#include "prio-q.h"
#include <stdio.h>

int main(void) {
    Prio_que pq;
    init(&pq);

    enqueue(&pq, "Task A", 10);
    enqueue(&pq, "Task B", 50);
    enqueue(&pq, "Task C", 30);

    printf("Top priority: %s\n", peek(pq));
    char *top = dequeue(&pq);
    printf("Dequeued: %s\n", top);
    free(top);

    clear(&pq);
    return 0;
}
Notes
The BST ensures O(log n) average complexity for insertion and removal (worst case: O(n) for unbalanced tree).

Duplicate priorities are not allowed.

All returned strings from dequeue() and get_all_elements() are dynamically allocated and must be freed by the caller.

Thorough memory management prevents leaks.
