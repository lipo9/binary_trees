#include "binary_trees.h"

/**
 * binary_tree_nodes - A function counts the nodes
 *	with at least 1 child in a binary tree
 *
 * @tree: tree node (root)
 *
 * Return: returns the number of parent nodes
 *	in a the tree or 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left || tree->right)
		return (
			(size_t)(1
				+ binary_tree_nodes(tree->left)
				+ binary_tree_nodes(tree->right)
				)
			);
	return (0);
}
