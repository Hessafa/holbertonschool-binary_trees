#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: The height of the tree, or 0 if the tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	/* If tree is NULL, return 0 (height of an empty tree) */
	if (tree == NULL)
		return (0);

	/* If there are no children, it's a single node (height = 0) */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* Recursively find the height of the left and right subtrees */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* Return the greater height + 1 for the root node */
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
