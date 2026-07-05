# 📘 Arrays in Data Structures and Algorithms

This folder contains my learning and implementations of **Arrays** as part of my Data Structures and Algorithms journey using **Python**.

---

# 📚 Topics Covered

- Introduction to Arrays
- Memory Representation
- Traversal
- Insertion
- Deletion
- Linear Search
- Merging Arrays
- Bubble Sort
- Selection Sort
- Insertion Sort
- Time and Space Complexity

---

# 📖 What is an Array?

An **Array** is a linear data structure that stores elements of the **same data type** in **contiguous memory locations**.

Example:

```text
Index : 0   1   2   3   4

Value :10  20  30  40  50
```

Elements are accessed using their index.

---

# ⚡ Time Complexity of Array Operations

| Operation | Time Complexity |
|-----------|-----------------|
| Access | O(1) |
| Traversal | O(n) |
| Linear Search | O(n) |
| Insertion | O(n) |
| Deletion | O(n) |
| Merging | O(n + m) |

---

# 🔍 Array Traversal

Traversal means visiting every element exactly once.

```python
arr = [10, 20, 30, 40, 50]

for element in arr:
    print(element)
```

**Complexity**

- Time: **O(n)**
- Space: **O(1)**

---

# ➕ Array Insertion

Insertion means adding a new element at a specific position.

Example

Before

```text
10 20 30 40
```

After inserting **25** at index **2**

```text
10 20 25 30 40
```

**Complexity**

- Time: **O(n)**

---

# ➖ Array Deletion

Deletion removes an element from the array.

Example

Before

```text
10 20 30 40 50
```

After deleting **30**

```text
10 20 40 50
```

**Complexity**

- Time: **O(n)**

---

# 🔎 Linear Search

Linear Search checks every element until the target is found.

Example

```python
arr = [10,20,30,40,50]

target = 40
```

**Best Case:** O(1)

**Worst Case:** O(n)

---

# 🔗 Merging Arrays

Two arrays can be combined into one.

Example

```text
Array 1

10 20 30

Array 2

40 50 60
```

Merged Array

```text
10 20 30 40 50 60
```

**Complexity**

- Time: **O(n + m)**

---

# 🔄 Bubble Sort

Bubble Sort repeatedly compares adjacent elements and swaps them if they are in the wrong order.

Example

```text
Before

5 3 8 1

After

1 3 5 8
```

### Complexity

| Case | Time |
|------|------|
| Best | O(n) |
| Average | O(n²) |
| Worst | O(n²) |

Space Complexity: **O(1)**

---

# 🎯 Selection Sort

Selection Sort repeatedly selects the smallest element from the unsorted portion and places it in its correct position.

### Complexity

| Case | Time |
|------|------|
| Best | O(n²) |
| Average | O(n²) |
| Worst | O(n²) |

Space Complexity: **O(1)**

---

# 📥 Insertion Sort

Insertion Sort builds the sorted array one element at a time by inserting each element into its proper position.

### Complexity

| Case | Time |
|------|------|
| Best | O(n) |
| Average | O(n²) |
| Worst | O(n²) |

Space Complexity: **O(1)**

---

# 📊 Sorting Comparison

| Algorithm | Best | Average | Worst | Stable |
|-----------|------|----------|--------|---------|
| Bubble Sort | O(n) | O(n²) | O(n²) | ✅ |
| Selection Sort | O(n²) | O(n²) | O(n²) | ❌ |
| Insertion Sort | O(n) | O(n²) | O(n²) | ✅ |

---

# 💡 Key Takeaways

- Arrays provide constant-time random access using indexes.
- Insertion and deletion are expensive because elements need to be shifted.
- Linear Search is simple but takes O(n) time in the worst case.
- Bubble Sort is easy to understand but inefficient for large datasets.
- Selection Sort minimizes the number of swaps.
- Insertion Sort performs well on small or nearly sorted datasets.

---

# 📂 Files in this Folder

```
Notes.md
Traversal.py
Insertion.py
Deletion.py
Linear_Search.py
Bubble_Sort.py
Selection_Sort.py
Insertion_Sort.py
README.md
```

---

# 🚀 Learning Progress

- ✅ Array Basics
- ✅ Memory Representation
- ✅ Traversal
- ✅ Insertion
- ✅ Deletion
- ✅ Linear Search
- ✅ Merging Arrays
- ✅ Bubble Sort
- ✅ Selection Sort
- ✅ Insertion Sort

---

## 👨‍💻 Author

**Ayush Mishra**

Learning **Data Structures and Algorithms with Python** as part of my Computer Science journey.

⭐ If you find this repository helpful, feel free to explore the implementations and follow my learning journey.