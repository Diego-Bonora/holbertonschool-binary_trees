#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if the binary tree is full or not
 * @tree: imput node
 * Return: returns 1 if its a full tree else 0
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		if (!tree->left && !tree->right)
			return (1);
		if (tree->left && tree->right)
			return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
		return (0);
	}
	return (0);
}
