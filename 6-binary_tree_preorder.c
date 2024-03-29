#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree pre-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node. The value
 * in the node must be passed as a parameter to this function
 *
 * Return: void
 * Description: if tree or func is NULL, do nothing
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !(func))
		return;

	func(tree->n);
	binary_tree_preorder((binary_tree_t *)tree->left, func);
	binary_tree_preorder((binary_tree_t *)tree->right, func);
}
