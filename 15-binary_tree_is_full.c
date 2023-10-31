#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is compelete
 * @tree: is a pointer to the root node of the tree
 * Return: if tree is NULL 0
 **/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return ((!tree->right && !tree->left) ? 1 : binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
