#include "binary_trees.h"

/**
 * binary_tree_preorder - function to print a binary tree in preorder traversal
 * @tree: head node
 * @func: function for printing
 * Return: nothing
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		if (tree->left)
			binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
