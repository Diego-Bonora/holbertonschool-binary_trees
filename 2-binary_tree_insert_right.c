#include "binary_trees.h"

binary_tree_t
*binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent != NULL)
	{

		new = malloc(sizeof(binary_tree_t));

		if (new == NULL)
			return (NULL);

		new->n = value;
		new->parent = parent;
		new->left = NULL;
		new->right = NULL;

		if (parent->right != NULL)
		{
			parent->right->parent = new;
			new->right = parent->right;
		}
		parent->right = new;
		return (new);
	}
	return (0);
}


