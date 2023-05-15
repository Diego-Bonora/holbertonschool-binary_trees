#include "binary_trees.h"
#include "stdbool.h"

int
binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_is_full(tree) && (binary_tree_height(tree->left) == binary_tree_height(tree->right)))
		return (1);
	return (0);
}

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