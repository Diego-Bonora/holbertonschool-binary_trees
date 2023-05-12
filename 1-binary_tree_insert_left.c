#include "binary_trees.h"

binary_tree_t
*binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	if (parent != NULL)
	{
		if (parent->left != NULL)
		{
			parent->left->parent = new;
			new->left = parent->left;
		}
		parent->left = new;
	}

	return (new);
}


