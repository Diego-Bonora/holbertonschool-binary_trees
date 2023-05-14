#include "binary_trees.h"

/**
 * binary_tree_inorder - prints a binary tree inorder traversal
 * @tree: head node of the tree
 * @func: function for printing
 * Return: nothing
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		if (tree->left)
		{
			binary_tree_inorder(tree->left, func);
		}
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
