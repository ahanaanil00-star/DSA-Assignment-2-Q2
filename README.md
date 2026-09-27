# DSA Assignment 2 – Question 2

## Data Structures and Algorithms

### Topic
**Binary Search Tree (BST) and Linear Search**

---

## Student Details

- **Roll Number:** 6
- **Assignment:** 2
- **Question:** 2
- **Subject:** Data Structures and Algorithms

---

## Problem Statement

An online bookstore stores the following ISBN keys:

`45, 20, 60, 10, 30, 50, 70, 25, 55`

A Binary Search Tree is constructed by inserting the ISBN keys in the given order.

The program performs:

1. Inorder traversal
2. Preorder traversal
3. Postorder traversal
4. BST Search
5. Linear Search

The keys searched are:

`25, 55, 90`

The number of comparisons required by BST Search and Linear Search is recorded and compared.

---

## BST Structure

```text
              45
            /    \
          20      60
         /  \    /  \
       10   30  50   70
            /     \
           25      55
Traversals
Inorder
10 20 25 30 45 50 55 60 70
Preorder
45 20 10 30 25 60 50 55 70
Postorder
10 25 30 20 55 50 70 60 45
Search Results
Key
BST Search
BST Comparisons
Linear Search
Linear Comparisons
25
Found
4
Found
8
55
Found
4
Found
9
90
Not Found
3
Not Found
9
Complexity Analysis
BST Search
Best Case: O(1)
Average Case: O(log n)
Worst Case: O(n)
Linear Search
Best Case: O(1)
Average Case: O(n)
Worst Case: O(n)
Space Complexity
BST: O(n)
Linear Search: O(1) additional space
The constructed BST has a height of 3 edges (4 levels).
Repository Contents
File
Description
bst_linear_search.c
C source code
input.txt
Input data and search keys
output.txt
Program execution output
complexity_analysis.txt
Time and space complexity analysis
comparison_table.txt
BST and Linear Search comparison
conclusion.txt
Final conclusion
Conclusion
For the given dataset, BST Search required fewer comparisons than Linear Search for all three tested keys.
The BST required 4 comparisons for key 25, 4 comparisons for key 55, and 3 comparisons for key 90. Linear Search required 8, 9, and 9 comparisons respectively.
Therefore, BST Search is preferable for the given dataset based on the observed number of comparisons. However, BST performance depends on the shape and height of the tree. A balanced BST can provide O(log n) average search time, while a highly skewed BST can have O(n) search time.
