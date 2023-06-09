#include "binary_trees.h"
/**
 * binary_tree_inorder - traverses a list in preorder traversal
 *
 * @tree: tree to traverse
 *
 * @func: function to call for every node
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
