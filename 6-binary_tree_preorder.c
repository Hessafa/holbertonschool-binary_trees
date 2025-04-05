#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - Pre-order tree traversal
 * @tree: Root node
 * @func: Function to call on node value
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)  /* Check if tree or func is NULL */
		return;

	func(tree->n);  /* Visit current node */
	binary_tree_preorder(tree->left, func);  /* Traverse left subtree */
	binary_tree_preorder(tree->right, func);  /* Traverse right subtree */
}
