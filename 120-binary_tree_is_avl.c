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
 * binary_tree_is_leaf - checks if a node is a leaf
 *
 * @node: pointer to the node to check
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int is_leaf = 0;

	if (node && !(node->left) && !(node->right))
		is_leaf = 1;

	return (is_leaf);
}


/**
 * check_parent - checks if node has a lower/higher than its grand parent
 *
 * @tree: actual node
 * Return: 1 if actual node has an appropiartely value, 0 otherwise
 */
int check_parent(const binary_tree_t *tree)
{
	const binary_tree_t *parent;
	const binary_tree_t *grand_parent;

	if (
	!tree ||
	!tree->parent ||
	!tree->parent->parent
	)
		return (1);

	parent = tree->parent;
	grand_parent = parent->parent;

	while (parent && grand_parent)
	{
		if (
		parent->n < grand_parent->n &&
		tree->n >= grand_parent->n
		)
			return (0);

		if (
		parent->n > grand_parent->n &&
		tree->n <= grand_parent->n
		)
			return (0);

		parent = parent->parent;
		grand_parent = parent->parent;
	}

	return (1);
}


/**
 * check_is_bst - checks if binary tree is a BST
 * @tree: tree node (root)
 * Return: 1 if tree is a BST, 0 otherwise
 */
int check_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (1);
	if (binary_tree_is_leaf(tree))
		return (1);
	if (
	tree->left &&
	tree->left->n >= tree->n
	)
		return (0);
	if (
	tree->right &&
	tree->right->n <= tree->n
	)
		return (0);
	if (
	!check_parent(tree->left) ||
	!check_parent(tree->right)
	)
		return (0);
	return (
		check_is_bst(tree->left) &&
		check_is_bst(tree->right)
	);
}


/**
 * binary_tree_is_avl - checks if tree is AVL
 *
 * @tree: tree node (root)
 * Return: 1 if tree is a AVL, 0 otherwise
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (
	tree && check_is_bst(tree) &&
	(binary_tree_height(tree->left) - binary_tree_height(tree->right) == 0)
	)
	{
		return (1);
	}
	return (0);
}
