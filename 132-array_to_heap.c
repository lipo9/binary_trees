#include "binary_trees.h"


/**
 * array_to_heap - builds a Max Binary Heap tree
 *
 * @array: pointer to the first element of the array
 * @size: number of element in the array
 * Return: pointer to the root node of the AVL tree
 */

heap_t *array_to_heap(int *array, size_t size)
{
	heap_t *tree = NULL;
	size_t i = 0;

	while (i < size)
		heap_insert(&tree, array[i]), i++;
	return (tree);
}

