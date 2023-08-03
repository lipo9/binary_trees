#include "binary_trees.h"


/**
 * binary_tree_sibling - A function that finds the sibling of a node
 *
 * @node: node
 *
 * Return: returns a pointer to the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left != node)
		return (node->parent->left);
	return (node->parent->right);
}


/**
 * binary_tree_uncle - A function that finds the uncle of a node
 *
 * @node: node
 *
 * Return: returns a pointer to the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
