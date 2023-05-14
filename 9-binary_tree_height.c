#include "binary_trees.h"

/**
 * binary_tree_height - finds and returns the height of the tree
 * @tree: head node
 * Return: returns the height of the tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree)
	{
		if (tree->left || tree->right)
		{
			left = binary_tree_height(tree->left);
			right = binary_tree_height(tree->right);
			if (left >= right)
				return (left + 1);
			else
				return (right + 1);
		}
	}
	return (0);
}
