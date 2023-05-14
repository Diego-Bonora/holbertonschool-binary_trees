#include "binary_trees.h"
#include "stdbool.h"

int
count_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		int left_count = count_nodes(tree->left);
		int right_count = count_nodes(tree->right);

		return (1 + left_count + right_count);
	}
}

int
binary_tree_is_perfect(const binary_tree_t *tree)
{

	int left_count;
	int right_count;

	if (tree == NULL)
		return (1);

	left_count = count_nodes(tree->left);
	right_count = count_nodes(tree->right);

	if (left_count == right_count &&
			binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right))
		return (1);

	return (0);
}
