#include "binary_trees.h"
/**
 * bst_search - function that searches for a value in a Binary Search Tree
 *
 * @tree: tree
 * @value: max
 * Return: Return the height
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree)
		return (NULL);
	while (tree)
	{
		if (value == tree->n)
			return ((bst_t *)tree);
		if (value < tree->n)
			tree = tree->left;
		else
			tree = tree->right;
	}
	return (NULL);
}
