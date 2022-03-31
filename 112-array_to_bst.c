#include "binary_trees.h"
/**
 * array_to_bst - unction that builds a Binary Search Tree from an array
 *
 * @array: tree
 * @size: max
 * Return: Return the height
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t i;
	bst_t *bst = NULL;

	if (!array || size == 0)
		return (NULL);
	bst = bst_insert(&bst, array[0]);
	for (i = 1; i < size; i++)
		bst_insert(&bst, array[i]);
	return (bst);
}
