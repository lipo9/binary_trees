#include "binary_trees.h"

/**
* binary_tree_insert_left - Inserts a node as the left child of another one
*
* @parent: node parent
* @value: node value
*
* Return: pointer to the new node or NULL on failure
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (!parent)
		return (NULL);

	newnode = binary_tree_node(parent, value);
	if (!newnode)
		return (NULL);

	if (parent->left != NULL)
		newnode->left = parent->left, parent->left->parent = newnode;
	parent->left = newnode;

	return (newnode);
}
