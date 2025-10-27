#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: is a pointer to the node to check
 * Return: 1 if node is a leaf, otherwise 0 and if node is NULL return 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->right != NULL || node->left != NULL)
		return (0);
	else if (node->right == NULL && node->left == NULL)
		return (1);

	return (0);
}
