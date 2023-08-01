#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree mode
 *
 * @parent: node parent
 * @value: node value
 *
 * Return: pointer to the new node or NULL on failure
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (!newnode)
		return (NULL);

	newnode->parent = parent;
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}

