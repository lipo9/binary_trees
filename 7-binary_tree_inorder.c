#include "binary_trees.h"

/**
 * binary_tree_inorder - A function that goes
 * through a binary tree using
 * inorder traversal
 *
 * @tree: tree root
 * @func: points to a function to call for each node
 *
 * Return: void (nothing)
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
