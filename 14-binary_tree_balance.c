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
	else
		left = 1;
	if (tree->right)
		right = binary_tree_height(tree->right) + 1;
	else
		right = 1;

	return (((left > right) ? left : right));
}


/**
 * binary_tree_balance - MA function that easures the balance factor
 *	of a binary tree
 *
 * @tree: A pointer to the root node of the tree to measure the balance factor
 *
 * Return: If tree is NULL, it returns 0, else, it returns the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (
		(size_t)(
			binary_tree_height(tree->left)
			- binary_tree_height(tree->right)
		));
}
