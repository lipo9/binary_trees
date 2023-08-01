#include "binary_trees.h"

/**
 * binary_tree_height - A function that measures the height of a binary tree
 *
 * @tree: tree node (root)
 *
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)

{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left = binary_tree_height(tree->left) + 1;
	if (tree->right)
		right = binary_tree_height(tree->right) + 1;

	return (((left > right) ? left : right));
}
