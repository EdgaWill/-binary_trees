#include "binary_trees.h"

/**
 * binary_tree_inorder - function that goes through a binary
 * tree using in-order traversal
 *
 * @tree: the root node
 * @func: function
 * Return: Void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || (*func) == NULL)
	{
		return;
	}
	/* first recur on left child */
	binary_tree_inorder(tree->left, (*func));
	/* root */
	(*func)(tree->n);
	/* now recur on right child */
	binary_tree_inorder(tree->right, (*func));
}
