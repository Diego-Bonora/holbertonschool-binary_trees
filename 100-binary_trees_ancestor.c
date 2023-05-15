#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree);

/**
 * binary_tree_ancestor - fints the lowest common ancestor
 * @first: first node
 * @second: second node
 * Return: returns a pointer to the common ancestor
*/

binary_tree_t
*binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	size_t arr1 = binary_tree_depth(first);
	size_t arr2 = binary_tree_depth(second);
	int *array1, *array2, value = 0;
	size_t counter1 = 1, counter2 = 1;
	binary_tree_t *temp = NULL;

	if (!first || !second)
		return (NULL);

	array1 = malloc(sizeof(int) * (arr1 + 1));
	if (!array1)
		return (NULL);
	array2 = malloc(sizeof(int) * (arr2 + 1));
	if (!array2)
		return (NULL);

	temp = first->parent;
	array1[0] = first->n;
	while (temp)
	{
		array1[counter1] = temp->n;
		temp = temp->parent;
		counter1++;
	}

	temp = second->parent;
	array2[0] = second->n;
	while (temp)
	{
		array2[counter2] = temp->n;
		temp = temp->parent;
		counter2++;
	}

	for (counter1 = 0; counter1 <= arr1; counter1++)
	{
		for (counter2 = 0; counter2 <= arr2; counter2++)
		{
			if (array1[counter1] == array2[counter2])
			{
				value = array1[counter1];
				break;
			}
			if (value != 0)
				break;
		}
	}
	free(array1), free(array2);
	if (value != 0)
	{
		if (first->n == value)
		{
			temp = first->parent;
			if (temp->left->n == value)
				return (temp->left);
			else
				return (temp->right);
		}
		else
		{
			temp = first->parent;
			while (temp)
			{
				if (temp->n == value)
					break;
				temp = temp->parent;
			}
			return (temp);
		}
	}
	return (NULL);
}

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
