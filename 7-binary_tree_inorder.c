#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - In-order tree traversal
 * @tree: Root node
 * @func: Function to call on node value
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)  /* Check if tree or func is NULL */
		return;

	binary_tree_inorder(tree->left, func);  /* Traverse left subtree */
	func(tree->n);  /* Visit current node */
	binary_tree_inorder(tree->right, func);  /* Traverse right subtree */
}
