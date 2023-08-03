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
 * print_level - prints nodes at the same level
 *
 * @tree: tree node (root)
 * @level: level of the node
 * @func: points to a function
 * Return: void
 */
void print_level(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (!tree)
		return;

	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		print_level(tree->left, level - 1, func);
		print_level(tree->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder - prints data in level-order traversal
 *
 * @tree: tree node (root)
 * @func: points to a function
 * Return: void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height;
	size_t i;

	if (!tree || !func)
		return;
	height = binary_tree_height(tree);
	for (i = 1; i <= height; i++)
		print_level(tree, i, func);
}
