#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the node with at least 1 child
 * in a binary tree
 * @tree: pointer tot the root node of the tree to count the
 * number of nodes
 *
 * Return: returns 0 if function is NULL, else 0
 * Description: A NULL pointer is not a node
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		count++;

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
