#include "binary_trees.h"

/**
 * binary_tree_uncle - This finds the uncle of a node
 * @node: pointer to th node to find the uncle
 *
 * Return: The pointer to the uncle node
 *         NULL when node is NULL
 *         NULL when the parent is NULL
 *         NULL when the node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
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
