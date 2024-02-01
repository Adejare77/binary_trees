#include "binary_trees.h"

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: pointer to the root node of the tree to check
 *
 * Return: return 0 if tree is NULL
*/
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int left_size = 0;
	int right_size = 0;

	if (!tree)
		return (0);

	if ((!tree->left && tree->right) || (tree->left && !tree->right))
	{
		
	}
	left_size = binary_tree_is_full(tree->left);
	right_size = binary_tree_is_full(tree->right);



	return (left_size == right_size ? 1 : 0);
}
