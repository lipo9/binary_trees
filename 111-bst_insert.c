#include "binary_trees.h"

/**
 * bst_insert - A function that inserts a value in a Binary Search Tree
 * @tree: A double pointer to the root node of the BST to insert the value
 * @value: The node value
 * Return: A pointer to the new node
 */


bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *cur_node, *new_node;

	if (tree)
	{
		cur_node = *tree;

		if (!cur_node)
		{
			new_node = binary_tree_node(cur_node, value);
			if (!new_node)
				return (NULL);
			return (*tree = new_node);
		}
		if (value < cur_node->n)
		{
			/* insert in left subtree */
			if (cur_node->left)
				return (bst_insert(&cur_node->left, value));
			new_node = binary_tree_node(cur_node, value);
			if (!new_node)
				return (NULL);
			return (cur_node->left = new_node);
		}
		if (value > cur_node->n)
		{
			/* insert in right subtree */
			if (cur_node->right)
				return (bst_insert(&cur_node->right, value));
			new_node = binary_tree_node(cur_node, value);
			if (!new_node)
				return (NULL);
			return (cur_node->right = new_node);
		}
	}
	return (NULL);
}
