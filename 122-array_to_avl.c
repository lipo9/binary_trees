#include "binary_trees.h"

/**
 * array_to_avl - builds an AVL tree
 *
 * @array: pointer to the first element of the array
 * @size: number of element in the array
 * Return: pointer to the root node of the AVL tree
 */
avl_t *array_to_avl(int *array, size_t size)
{
	avl_t *tree = NULL;
	size_t i = 0;

	while (i < size)
		avl_insert(&tree, array[i]), i++;

	if (i == size)
		return (tree);

	return (NULL);
}
