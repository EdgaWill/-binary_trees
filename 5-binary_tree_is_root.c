#include "binary_trees.h"

/**
 * binary_tree_is_root - cheks if a given node is a root
 *
 * @node: the node to check
 * Return: Return 1 on 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->parent == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
