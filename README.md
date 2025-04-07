🌳 Binary Trees in C

This project is all about building, understanding, and navigating binary trees in C — from scratch, no shortcuts.

🧠 Objectives

By the end of this, I can confidently explain:

What a binary tree is

The difference between a Binary Tree and a Binary Search Tree

Time complexity advantage over linked lists

Tree concepts: depth, height, size

Tree traversal methods: pre-order, in-order, post-order

What makes a tree complete, full, perfect, or balanced

🧩 Data Structures Used

struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;    // Binary Search Tree
typedef struct binary_tree_s avl_t;    // AVL Tree
typedef struct binary_tree_s heap_t;   // Max Binary Heap

👥 Authors

Hessah Alotyash

Maram Alsofyani
