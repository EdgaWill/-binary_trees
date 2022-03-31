#include "binary_trees.h"

/**
 * recursive_depth - function that finds the lowest common ancestor of two nodes
 *
 * @tree: tree root
 * Return: binary tree
 */
size_t recursive_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	return (recursive_depth(tree->parent) + 1);
}

/**
 * binary_tree_depth - function that finds the lowest common ancestor of two nodes
 *
 * @tree: tree root
 * Return: binary tree 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (recursive_depth(tree));
}

/**
 * binary_tree_uncle - function that finds the lowest common ancestor of two nodes
 *
 * @first: pointer
 * @second: pointer
 * Return: the lowest common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	if (binary_tree_depth(first) > binary_tree_depth(second))
		return (binary_trees_ancestor(first->parent, second));

	if (binary_tree_depth(first) < binary_tree_depth(second))
		return (binary_trees_ancestor(first, second->parent));

	return (binary_trees_ancestor(first->parent, second->parent));
}
