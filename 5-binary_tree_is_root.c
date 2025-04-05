#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root.
 * @node: Pointer to the node to check.
 * Return: 1 if node is a root, 0 otherwise.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)  /* If the node is NULL, it's not a root */
		return (0);

	/* Check if the node has no parent (it's the root) */
	if (node->parent == NULL)
		return (1);

	return (0);  /* Node has a parent, so it's not the root */
}
