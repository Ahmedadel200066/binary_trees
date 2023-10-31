#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through binary tree
 * @tree: is a pointer
 * @func: is a pointer
 **/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
