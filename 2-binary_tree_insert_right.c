#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node
 *
 * @parent: the node.
 * @value: new node.
 * Return: created node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}
	new_node = binary_tree_node(parent, value);
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right = new_node;
		new_node->right->parent = new_node;
	}
	else
	{
		parent->right = new_node;
	}
	return (new_node);
}