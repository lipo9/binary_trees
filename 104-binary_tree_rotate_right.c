#include "binary_trees.h"

/**
 * binary_tree_rotate_right - A function performs a right-rotation
 *	on a binary tree
 *
 * @tree: tree node (root)
 * Return: A pointer to the new root node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	if (!tree || !tree->left)
		return (tree);

	new_root = tree->left;

	if (new_root->right)
		tree->left = new_root->right, new_root->right->parent = tree;
	else
		tree->left = NULL;

	new_root->right = tree;
	new_root->parent = tree->parent;
	tree->parent = new_root;

	return (new_root);
}

