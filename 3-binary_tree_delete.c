#include "binary_trees.h"

/**
 * binary_tree_delete - A function that deletes an whole binary tree
 *
 * @tree: tree node (root)
 * Return: returns nothing (void)
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
