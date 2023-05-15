#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Said node
 *
 * Return: The address of the uncle
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->parent->left == node->parent)
	{
		if (node->parent->parent->right == NULL)
		{
			return (NULL);
		}
		else
		{
			return (node->parent->parent->right);
		}
	}
	if (node->parent->parent->right == node->parent)
	{
		if (node->parent->parent->left == NULL)
		{
			return (NULL);
		}
		else
		{
			return (node->parent->parent->left);
		}
	}
	return (NULL);
}
