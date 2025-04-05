#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new node for a binary tree.
 * @parent: Pointer to the parent node of the new node.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the new node, or NULL if memory allocation fails.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)  /* Check for memory allocation failure */
		return (NULL);

	new_node->n = value;  /* Assign value to the node */
	new_node->parent = parent;  /* Assign parent pointer */
	new_node->left = NULL;  /* Left child is NULL by default */
	new_node->right = NULL;  /* Right child is NULL by default */

	return (new_node);
}
