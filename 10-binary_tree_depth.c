#include "binary_trees.h"

/**
 * binary_tree_depth - finds and return the depth of a node
 * @tree: imput node
 * Return: returns the depth of a node
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree)
	{
		if (tree->parent)
		{
			depth = binary_tree_depth(tree->parent);
			return (depth + 1);
		}
	}
	return (0);
}
