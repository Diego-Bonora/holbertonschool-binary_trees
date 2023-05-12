#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves of a binary tree
 * @tree: imput node
 * Return: returns the number of leaves
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		if (tree->left)
			leaves++;
		if (tree->right)
			leaves++;
	}
	return (leaves);
}

