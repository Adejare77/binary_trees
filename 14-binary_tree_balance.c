#include "binary_trees.h"

/**
 * binary_tree_check - finds the highest leaf along the right subtree
 * @sub_tree: pointer to the first right subtree
 * Return: 0 if subtree is NULL
*/
int binary_tree_check(const binary_tree_t *sub_tree)
{
	int left_height = 1;
	int right_height = 1;

	if (!sub_tree)
		return (0);

	if (sub_tree->right)
		right_height += binary_tree_check(sub_tree->right);

	if (sub_tree->left)
		left_height += binary_tree_check(sub_tree->left);

	return (right_height > left_height ? right_height : left_height);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the
 * balance factor
 *
 * Return: the balance factor. if tree is NULL return 0
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int l_diff = 0;
	int r_diff = 0;

	if (!tree)
		return (0);

	l_diff = binary_tree_check(tree->left);
	r_diff = binary_tree_check(tree->right);

	return (l_diff - r_diff);
}
