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
/**
 * tree_size - calculates the size of a tree
 *
 * @tree: a tree
 *
 * Return: size or 0 if no tree
*/
size_t tree_size(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree != NULL)
	{
		left = tree_size(tree->left);
		right = tree_size(tree->right);
		return ((left + right) + 1);
	}
	else
	{
		return (0);
	}
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: a tree
 *
 * Return: 1 if perfect, 0 if not perfect
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_size, right_size;
	int balance;

	if (tree != NULL)
	{
		left_size = tree_size(tree->left);
		right_size = tree_size(tree->right);
		balance = binary_tree_balance(tree);

		if (balance == 0 && (left_size == right_size))
		{
			return (1);
		}
	}
	return (0);
}
