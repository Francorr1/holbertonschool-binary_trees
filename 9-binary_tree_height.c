#include "binary_trees.h"
/**
 * binary_tree_height - calculates the height of a binary tree
 *
 * @tree: tree to measure
 *
 * Return: height or 0 if not a tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree != NULL && (tree->left != NULL || tree->right != NULL))
	{
		left = binary_tree_height(tree->left);
		right = binary_tree_height(tree->right);
		if (left > right)
		{
			return (left + 1);
		}
		else
		{
			return (right + 1);
		}
	}
	else
	{
		return (0);
	}
}
