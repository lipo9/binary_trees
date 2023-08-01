#include "binary_trees.h"

/**
 * binary_tree_is_root - a function that checks if a given node is a root
 *
 * @node: pointer to the node to be checked
 *
 * Return: returns 1 if the passed node is a root, otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	int is_root = 0;

	if (node && !(node->parent))
		is_root = 1;

	return (is_root);
}

