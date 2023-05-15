#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds the sibiling of a node
 * @node: Said node
 *
 * Return: The address of the sibiling
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == node)
	{
		if (node->parent->right == NULL)
		{
			return (NULL);
		}
		else
		{
			return (node->parent->right);
		}
	}
	if (node->parent->right == node)
	{
		if (node->parent->left == NULL)
		{
			return (NULL);
		}
		else
		{
			return (node->parent->left);
		}
	}
	return (NULL);
}
