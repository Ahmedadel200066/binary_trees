#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node
 * @tree: is a pointer
 * Return: 0 if tree = null
 **/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
