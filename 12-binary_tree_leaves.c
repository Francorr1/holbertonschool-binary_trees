#include "binary_trees.h"
/**
 * binary_tree_leaves - Calculates the amount of leaves on a tree
 * @tree: Said tree
 *
 * Return: The amount of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
		size_t left = 0, right = 0;

	if (tree != NULL)
	{
		left = binary_tree_leaves(tree->left);
		right = binary_tree_leaves(tree->right);
		if (tree->left == NULL && tree->right == NULL)
		{
			return ((left + right) + 1);
		}
		return (left + right);
	}
	else
	{
		return (0);
	}
}
