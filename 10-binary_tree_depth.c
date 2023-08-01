#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 *
 * @tree: tree node (root)
 *
 * Return: depth of a node in a binary tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !tree->parent)
		return (0);
	return (binary_tree_depth(tree->parent) + 1);
}
