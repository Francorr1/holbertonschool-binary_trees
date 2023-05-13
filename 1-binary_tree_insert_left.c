#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *
 * @parent: parent of the new child node
 *
 * @value: value of the new node
 *
 * Return: pointer to new child or NULL if fail or if no parent
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	if (!parent)
		return (NULL);

	tmp = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		tmp->left = parent->left;
		tmp->left->parent = tmp;
		parent->left = tmp;
	}
	else
	{
		parent->left = tmp;
	}
	return (tmp);
}
