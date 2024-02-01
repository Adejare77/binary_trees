#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: pointer to the root node of the tree to measure the depth
 *
 * Return: Depth of the tree
 * Description:  if tree is NULL, return 0
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t height = 0;

	if (!tree)
		return (0);

	if (tree->parent)
	height = 1 + binary_tree_depth(tree->parent);

	return (height);
}
