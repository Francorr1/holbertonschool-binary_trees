#include "binary_trees.h"
/**
 * binary_tree_balance - Calculates the balance factor of a tree
 * @tree: Said tree
 *
 * Return: The balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0, balance = 0;

	if (tree != NULL)
	{
		left = tree_height(tree->left);
		right = tree_height(tree->right);
		balance = left - right;
		return (balance);
	}
	else
	{
		return (0);
	}
}

/**
 * tree_height - calculates the height of a binary tree
 *
 * @tree: tree to measure
 *
 * Return: height or 0 if not a tree
*/
int tree_height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree != NULL)
	{
		left = tree_height(tree->left);
		right = tree_height(tree->right);
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
