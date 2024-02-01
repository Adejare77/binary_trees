#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if full, else 0 even if tree is NULL.
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_size = 0;
	int right_size = 0;

	if (!tree)
		return (0);

	left_size = binary_tree_is_full(tree->left);
	right_size = binary_tree_is_full(tree->right);

	return (left_size == right_size ? 1 : 0);
}
