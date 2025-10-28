#include "binary_trees.h"
#include <math.h>

/**
 * height - measures the height of a binary tree
 * @tree: pointer to the root node
 * Return: height
 */
size_t height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = height(tree->left);
	right = height(tree->right);
	return ((left > right ? left : right) + 1);
}

/**
 * count_nodes - counts the number of nodes in a binary tree
 * @tree: pointer to the root node
 * Return: number of nodes
 */
size_t count_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + count_nodes(tree->left) + count_nodes(tree->right));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h, nodes, expected;

	if (tree == NULL)
		return (0);

	h = height(tree);
	nodes = count_nodes(tree);
	expected = (1 << h) - 1;

	return (nodes == expected);
}
