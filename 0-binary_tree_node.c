#include "binary_trees.h"

/**
 * binary_tree_node - This Creates a new binary tree node
 *
 * @parent: - A pointer to the parent node of the node to create
 * @value: - The value to put in the new node
 * Return: pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* The declaration of the new node with its data type */
	binary_tree_t *new;

	/* allocation of  memory space for that node */
	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
	{
		return (NULL);
	}

	/* assignment of values to the properties of the node */
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;

	/* return a pointer to the node */
	return (new);
}
