#include "binary_trees.h"
/**
 * binary_tree_depth - calculates the depth of a binary tree
 *
 * @tree: tree to calculate the depth
 *
 * Return: depth or 0 if no tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t parent = 0;

	if (tree != NULL && tree->parent)
	{
		parent = binary_tree_depth(tree->parent);
		return (parent + 1);
	}
	else
	{
		return (0);
	}
}
