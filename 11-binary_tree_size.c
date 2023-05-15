#include "binary_trees.h"
/**
 * binary_tree_size - calculates the size of a tree
 *
 * @tree: a tree
 *
 * Return: size or 0 if no tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree != NULL)
	{
		left = binary_tree_size(tree->left);
		right = binary_tree_size(tree->right);
		return ((left + right) + 1);
	}
	else
	{
		return (0);
	}
}
