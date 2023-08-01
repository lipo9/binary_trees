#include "binary_trees.h"

/**
 * binary_tree_postorder - A function that goes
 * through a binary tree using
 * postorder traversal
 *
 * @tree: tree node (root)
 * @func: points to a function to call for each node
 *
 * Return: void (nothing)
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
