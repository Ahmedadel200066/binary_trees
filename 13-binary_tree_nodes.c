#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with 1 child or more
 * @tree: is a pointer to the root node
 * Return: if tree is NULL 0, if it's not number of nodes
 **/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (((tree->left || tree->right) ? 1 : 0) +
			binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));
}
