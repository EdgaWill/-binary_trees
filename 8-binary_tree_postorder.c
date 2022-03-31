#include "binary_trees.h"

/**
 * binary_tree_postorder - funtion that goes through a binary tree using
 * post-order traversal
 *
 * @tree: the root node
 * @func: function node
 * Return: Void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Postorder (Left, Right, Root) */
	if (tree == NULL || (*func) == NULL)
	{
		return;
	}
	/* first recur on left subtree */
	binary_tree_postorder(tree->left, (*func));
	/* then recur on right subtree */

	binary_tree_postorder(tree->right, (*func));
	/* now deal with the node */
	(*func)(tree->n);
}
