#include "binary_trees.h"

/**
 * binary_tree_levelorder - goes through a binary tree using
 * level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node. The value
 * in the node must be passed as a parameter to this function
 *
 * Return: void if tree or func is NULL
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	if (tree->left || tree->right)
		return;
	
	func(tree->n);
	binary_tree_levelorder(tree->left, (int)tree->n);
	func(tree->n);
	binary_tree_levelorder(tree->right, (int)tree->n);
}
