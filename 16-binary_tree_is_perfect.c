#include "binary_trees.h"

/**
 * binary_tree_h - finds the highest leaf along the right subtree
 * @sub_tree: pointer to the first right subtree
 *
 * Return: 0 if subtree is NULL
*/
int binary_tree_h(const binary_tree_t *sub_tree)
{
	int left_height = 1;
	int right_height = 1;

	if (!sub_tree)
		return (0);

	if (!((sub_tree->left && sub_tree->right) ||
	(!sub_tree->left && !sub_tree->right)))
		return (0);

	right_height += binary_tree_h(sub_tree->right);
	left_height += binary_tree_h(sub_tree->left);

	return (right_height == left_height ? 1 : 0);
}


/**
 * binary_tree_s - finds the size of the tree
 * @sub_tree: pointer to the root node of the tree to check
 *
 * Return: height of the tree
*/
int binary_tree_s(const binary_tree_t *sub_tree)
{
	int count = 1;

	if (!sub_tree)
		return (0);

	count += binary_tree_s(sub_tree->left);
	count += binary_tree_s(sub_tree->right);

	return (count);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 on success, else 0 even if tree is NULL
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_h, left_c, right_h, right_c;

	if (!tree)
		return (0);

	left_h = binary_tree_h(tree->left);
	right_h = binary_tree_h(tree->right);
	left_c = binary_tree_s(tree->left);
	right_c = binary_tree_s(tree->right);

	return ((left_c == right_c) && (left_h == right_h) ? 1 : 0);
}
