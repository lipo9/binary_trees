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


/**
 * tree_is_complete - checks if tree is complete
 *
 * @tree: points to the tree node (root)
 * @i: node index
 * @nodes_count: number of nodes
 * Return: 1 if tree is complete, 0 otherwise
 */
int tree_is_complete(const binary_tree_t *tree, int i, int nodes_count)
{
	if (tree == NULL)
		return (1);

	if (i >= nodes_count)
		return (0);

	return (tree_is_complete(tree->left, (2 * i) + 1, nodes_count) &&
	tree_is_complete(tree->right, (2 * i) + 2, nodes_count));
}


/**
 * binary_tree_is_complete - A function that checks
 *	if a binary tree is complete
 * @tree: tree root
 * description: calls the tree_is_complete function
 * Return: 1 if tree is complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree);

	return (tree_is_complete(tree, 0, size));
}
