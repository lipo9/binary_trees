#include "binary_trees.h"

/**
 * array_to_bst - builds a binary search tree from an array
 *
 * @array: pointer to the first element of the array
 * @size: number of element in the array
 * Return: pointer to the root node of the BST
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t i = 0;

	while (i < size)
		bst_insert(&tree, array[i]), i++;
	if (i == size)
		return (tree);
	return (NULL);
}
