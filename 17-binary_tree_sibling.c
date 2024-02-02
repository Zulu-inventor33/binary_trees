#include "binary_trees.h"

/**
 * binary_tree_sibling - This finds the sibling of a node
 * @node: A pointer to the node to find the sibling
 *
 * Return: The pointer to the sibling node
 *         NULL when node is NULL
 *         NULL when the parent is NULL
 *         NULL when the node has no siblings
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
