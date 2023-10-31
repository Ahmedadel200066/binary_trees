#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree using in-order
 * @tree: is a pointer to the root node 3mr 7a7a remix
 * @func: is a pointer to a function to call for every node
 **/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
