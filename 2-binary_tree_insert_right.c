#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *
 * @parent: parent of the new child node
 *
 * @value: value of the new node
 *
 * Return: pointer to new child or NULL if fail or if no parent
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	if (!parent)
		return (NULL);

	tmp = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		tmp->right = parent->right;
		tmp->right->parent = tmp;
		parent->right = tmp;
	}
	else
	{
		parent->right = tmp;
	}
	return (tmp);
}

