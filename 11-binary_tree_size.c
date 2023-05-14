#include "binary_trees.h"

/**
 * binary_tree_size - finds and returns the amount of nodes in the tree
 * @tree: imput node
 * Return: amount of nodes in the tree
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree)
	{
		left = binary_tree_size(tree->left);
		right = binary_tree_size(tree->right);
		return (left + right + 1);
	}
	return (0);
}
