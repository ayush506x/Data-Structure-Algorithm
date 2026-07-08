# 🔗 Linked List in Data Structures and Algorithms

This folder contains my learning and implementations of **Linked Lists** as part of my Data Structures and Algorithms journey using **Python**.

---

# 📚 Topics Covered

- Introduction to Linked Lists
- Why Linked Lists?
- Node Structure
- Memory Representation
- Creating a Linked List
- Traversing a Linked List
- Counting Nodes
- Sum of Nodes
- Time and Space Complexity
- Advantages and Disadvantages

---

# 📖 What is a Linked List?

A **Linked List** is a linear data structure in which elements are stored as **nodes**. Each node contains:

- Data
- Reference (Pointer) to the next node

Unlike arrays, linked list elements are **not stored in contiguous memory locations**.

---

# 🧩 Structure of a Node

```
+-----------+-----------+
|   Data    |   Next    |
+-----------+-----------+
```

Example

```
+------+------+
|  10  |  ●---->
+------+------+
```

---

# 🔗 Example Linked List

```
Head
 ↓
10 → 20 → 30 → None
```

Each node stores the address (reference) of the next node.

---

# 💻 Python Node Representation

```python
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
```

---

# 🧠 Memory Representation

Unlike arrays, linked list nodes are stored at different memory locations.

Example

| Address | Data | Next |
|---------|------|------|
| 100 | 10 | 500 |
| 500 | 20 | 850 |
| 850 | 30 | None |

Conceptually

```
10 → 20 → 30 → None
```

---

# 🚶 Traversing a Linked List

Traversal means visiting every node exactly once.

Example

```python
current = head

while current is not None:
    print(current.data)
    current = current.next
```

### Complexity

- Time: **O(n)**
- Space: **O(1)**

---

# 📊 Array vs Linked List

| Array | Linked List |
|--------|-------------|
| Contiguous Memory | Non-Contiguous Memory |
| Fixed Size (in many languages) | Dynamic Size |
| Random Access | Sequential Access |
| Fast Indexing | Slower Traversal |
| Insertion: O(n) | Efficient when node position is known |
| Deletion: O(n) | Efficient when node position is known |

---

# ✅ Advantages

- Dynamic size
- Efficient insertion
- Efficient deletion
- Better memory utilization for dynamic data

---

# ❌ Disadvantages

- Extra memory for references
- No direct indexing
- Sequential access only
- More complex implementation than arrays

---

# ⚡ Complexity Summary

| Operation | Time Complexity |
|-----------|-----------------|
| Traversal | O(n) |
| Searching | O(n) |
| Access by Position | O(n) |
| Create Node | O(1) |

---

# 📂 Files in this Folder

```
README.md
Notes.md
Create_Linked_List.py
Traversal.py
Count_Nodes.py
Sum_of_Nodes.py
```

---

# 🎯 Key Learnings

- Learned why Linked Lists are needed.
- Understood the structure of a node.
- Created a Linked List in Python.
- Traversed a Linked List.
- Counted the total number of nodes.
- Calculated the sum of all node values.
- Compared Arrays and Linked Lists.
- Learned the time complexity of basic operations.

# 👨‍💻 Author

**Ayush Mishra**

Learning **Data Structures and Algorithms with Python** while documenting my complete journey on GitHub.

⭐ This repository is part of my goal to strengthen problem-solving skills and prepare for technical interviews.