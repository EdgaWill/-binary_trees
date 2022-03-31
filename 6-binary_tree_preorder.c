#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary
 *
 * @tree: the root node
 * @func: function each node
 * Return: Void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || (*func) == NULL)
	{
		return;
	}
	/* Pre-order transversal: Root, Left, Right */
	(*func)(tree->n);
	binary_tree_preorder(tree->left, (*func));
	binary_tree_preorder(tree->right, (*func));
}
