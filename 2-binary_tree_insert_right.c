#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right node.
 * @parent: Pointer to the parent node of the new node.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the new node, or NULL if parent is NULL or memory
 *         allocation fails.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)  /* Check if parent is NULL */
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)  /* Check for memory allocation failure */
		return (NULL);

	new_node->n = value;  /* Assign value to the new node */
	new_node->parent = parent;  /* Set parent to the given parent */
	new_node->left = NULL;  /* New node's left child is NULL */
	new_node->right = NULL;  /* New node's right child is NULL */

	/* If parent already has a right child, make it the right child of new node */
	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;  /* Set the old right child’s parent */
	}

	parent->right = new_node;

	return (new_node);  /* Return the pointer to the new node */
}
