#include "binary_trees.h"
/**
 * binary_tree_node - creates a new node for a binary tree
 *
 * @parent: parent of the new node
 *
 * @value: value for the new node
 *
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	tmp = malloc(sizeof(binary_tree_t));
	if (!tmp)
		return (NULL);

	if (parent == NULL)
	{
		tmp->parent = NULL;
	}
	else
	{
		tmp->parent = parent;
	}
	tmp->left = NULL;
	tmp->right = NULL;
	tmp->n = value;
	return (tmp);
}
