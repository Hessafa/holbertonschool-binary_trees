#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes a binary tree.
 * @tree: Root node of the tree.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)  /* If tree is NULL, do nothing */
		return;

	/* Recursively delete left and right subtrees */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/* Free the current node */
	free(tree);
}
