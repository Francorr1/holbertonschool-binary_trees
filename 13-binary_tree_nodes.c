#include "binary_trees.h"
/**
 * binary_tree_nodes - counts all the nodes with at least 1 child
 *
 * @tree: a tree
 *
 * Return: number of nodes, or 0 if no tree
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree != NULL && (tree->left != NULL || tree->right != NULL))
	{
		left = binary_tree_nodes(tree->left);
		right = binary_tree_nodes(tree->right);
		return ((left + right) + 1);
	}
	return (0);
}
