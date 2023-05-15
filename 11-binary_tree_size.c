#include "binary_trees.h"
/**
 * 
 * 
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t size = 0;
    if (tree != NULL)
    {
        size += binary_tree_size(tree->left);
        if (tree->left != NULL)
        {
            return (size + 1);
        }
        
        size += binary_tree_size(tree->right);
        if (tree->right != NULL)
        {
            return(size + 1);
        }
        return (size);
    }
    return(size);
}
