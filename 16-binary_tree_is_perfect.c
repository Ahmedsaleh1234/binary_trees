#include "binary_trees.h"
/**
 * depth - the depth of tree
 * @tree: s a pointer to
 * the root node of the tree to check
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
 * @tree: s a pointer to
 * the root node of the tree to check
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
