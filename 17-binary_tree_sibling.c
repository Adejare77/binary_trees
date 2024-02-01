#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: NULL if node or parent is NULL. Also NUll if no siblings
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !(node->parent) ||
	(!node->parent->left && !node->parent->right))
		return (NULL);

	return (node->parent->left != node ?
	node->parent->left : node->parent->right);
}
