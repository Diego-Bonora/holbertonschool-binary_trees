#include "binary_trees.h"

/**
 * binary_tree_nodes - finds and count all the nodes that have leaves
 * @tree: imput node
 * Return: returns the amount of nodes that have leaves
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count, total;

	if (tree)
	{
		count = binary_tree_nodes(tree->left);
		total = binary_tree_nodes(tree->right);
		if (tree->left || tree->right)
			return (count + total + 1);
	}
	return (0);
}
