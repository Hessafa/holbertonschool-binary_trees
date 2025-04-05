#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - Post-order tree traversal
 * @tree: Root node
 * @func: Function to call on node value
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)  /* Check if tree or func is NULL */
		return;

	binary_tree_postorder(tree->left, func);  /* Traverse left subtree */
	binary_tree_postorder(tree->right, func);  /* Traverse right subtree */
	func(tree->n);  /* Visit current node */
}
