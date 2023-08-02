#include "binary_trees.h"

/**
 * binary_tree_leaves - A function that counts the leaves in a binary tree
 *
 * @tree: points to the node to check
 *
 * Return: number of leaves in a tree or 0 if the tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
