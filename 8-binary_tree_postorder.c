#include "binary_trees.h"

/**
 * binary_tree_postorder - prints a binary tree in postorder traversal
 * @tree: head node
 * @func: function for printing
 * Return: nothing
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		if (tree->left)
		{
			binary_tree_postorder(tree->left, func);
		}
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
