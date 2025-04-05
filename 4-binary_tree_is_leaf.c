#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 * @node: Pointer to the node to check.
 * Return: 1 if node is a leaf, 0 otherwise.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)  /* If the node is NULL, it's not a leaf */
		return (0);

	/* Check if both left and right children are NULL */
	if (!node->left && !node->right)
		return (1);

	return (0);  /* Node has at least one child, so it's not a leaf */
}
