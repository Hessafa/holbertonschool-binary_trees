<p align="center"> <h1 style="font-size: 3em; "> C - Binary Trees</h1> </p>
<br>
<p align="center"> <img src="https://www.detrios.com/s/img/emotionheader.jpg?1590072042.920px.296px" width="100%" /> </p>
This is a group project 
🖥️ This is a group project by Maram Alsofyani & Hessah Alotyash, it's part of our studies at <td><a href="https://tuwaiq.edu.sa/holberton">Holberton School by Tuwaiq Academy</a></td>
<h2>Description</h2>
<p> 

#### 🌳 Binary Trees in C

This project is all about building, understanding, and navigating binary trees in C — from scratch, no shortcuts.

#### 🧠 Objectives
What we learned from this project: 
- What a binary tree is

- The difference between a Binary Tree and a Binary Search Tree

- Time complexity advantage over linked lists

- Tree concepts: depth, height, size

- Tree traversal methods: pre-order, in-order, post-order

- What makes a tree complete, full, perfect, or balanced

#### 🧩 Data Structures Used


```c
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};
````

```c
typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;    // Binary Search Tree
typedef struct binary_tree_s avl_t;    // AVL Tree
typedef struct binary_tree_s heap_t;   // Max Binary Heap 
```` 
#### Binary Tree Visualization

In this section, we demonstrate how a binary search tree (BST) is formed from a sorted array.

![Binary Search Tree Animation](https://www.mathwarehouse.com/programming/images/binary-search-tree/binary-search-tree-sorted-array-animation.gif)

The GIF above shows how elements from a sorted array are inserted into the BST. This process ensures that the tree remains sorted and balanced.


##  <img src="https://img.icons8.com/ios/452/github.png" width="30"/> Authors: 

[![GitHub](https://img.shields.io/badge/GitHub-Hessah_Alotaysh-lightpink)](https://github.com/hessafa)

[![GitHub](https://img.shields.io/badge/GitHub-Maram_Alsofyani-lightpink)](https://github.com/maram-ra)
