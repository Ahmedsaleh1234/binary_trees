#include "binary_trees.h"
/**
 * depth - the depth of tree
 * @tree: is a pointer
 * Return: the depth
 */
int depth(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	return (depth(tree->left) + 1 + depth(tree->right));
}
/**
 * binary_tree_is_perfect - function that checks
 * if a binary tree is perfect
 * @tree: is a pointer
 * Return: 0 or 1 if is perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int rdepth = 0, ldepth = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree && (!tree->left && !tree->right))
	{
		return (1);
	}
	rdepth = depth(tree->right);
	ldepth = depth(tree->left);
	if ((rdepth - ldepth) == 0)
	{
		return (1);
	}
	return (0);
}
