#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: pointer to the lowest common ancestor else NULL
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	const binary_tree_t *f_tmp, *s_tmp;

	if (!first || !second)
		return (NULL);

	for (f_tmp = first; f_tmp != NULL; f_tmp = f_tmp->parent)
	{
		for (s_tmp = second; s_tmp != NULL; s_tmp = s_tmp->parent)
		{
			if (s_tmp == f_tmp)
				return ((binary_tree_t *)s_tmp);
		}
	}

	return (NULL);
}
