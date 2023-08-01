#include "binary_trees.h"

/**
* binary_tree_insert_right - Inserts a node as the right child of another one
*
* @parent: parent node
* @value: the value to insert
*
* Return: pointer to the new node or NULL on failure
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (!parent)
		return (NULL);

	newnode = binary_tree_node(parent, value);
	if (!newnode)
		return (NULL);

	if (parent->right != NULL)
		newnode->right = parent->right, parent->right->parent = newnode;
	parent->right = newnode;

	return (newnode);
}
