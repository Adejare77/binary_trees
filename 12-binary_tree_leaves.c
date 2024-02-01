#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number
 * of leaves
 *
 * Return: number of leaf nodes, else 0
 * Description: A NULL pointer is not a leaf
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		leaf++;
	leaf += binary_tree_leaves(tree->left);
	leaf += binary_tree_leaves(tree->right);

	return (leaf);
}
