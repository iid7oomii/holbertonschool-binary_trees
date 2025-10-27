#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * binary_tree_depth - measures the depth of a node in abinary tree.
 * @tree: is a pointer to the node to measure the depth.
 * Return: the depth of the node and if tree is NULL return 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int i = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		tree = tree->parent;
		i++;
	}

	return (i);
}
