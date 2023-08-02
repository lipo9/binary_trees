#include "binary_trees.h"

/**
 * binary_tree_size - this function measures the size of a binary tree
 *
 * @tree: tree node (root)
 *
 * Return: returns the size of the tree or 0 if the tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return ((size_t)
		(binary_tree_size(tree->left)
		 + binary_tree_size(tree->right) + 1)
		);
}
