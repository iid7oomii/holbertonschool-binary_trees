#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * binary_tree_leaves - counts the leaves in a binary tree.
 * @tree: is a pointer to the root node of the
 *  tree to count the number of leaves.
 *
 * Return: return the counts of
 * the leaves in a binary tree and 0 if tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
