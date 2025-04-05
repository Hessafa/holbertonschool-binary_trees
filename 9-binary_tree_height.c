#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Measures height of binary tree
 * @tree: Pointer to root node
 *
 * Return: Height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)  /* If tree is NULL, return 0 */
		return (0);

	/* Calculate height of left and right subtrees */
	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	/* Return the greater of the two heights plus 1 for current node */
	return (1 + (left_height > right_height ? left_height : right_height));
}
