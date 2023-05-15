#include "binary_trees.h"
/**
 * binary_tree_delete - deletes a whole binary tree
 *
 * @tree: the tree
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL && (tree->left != NULL || tree->right != NULL))
	{
		binary_tree_delete(tree->left);
		if (tree->parent != NULL)
		{
		free(tree->left);
		}
		binary_tree_delete(tree->right);
		if (tree->parent != NULL)
		{
		free(tree->right);
		}
		free(tree);
	}
}
