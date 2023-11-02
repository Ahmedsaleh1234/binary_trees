#include "binary_trees.h"
/**
 * height - measure the height of the tree
 * @tree: is a pointer to the root node
 * Return: the height
 */
size_t height(const binary_tree_t *tree)
{
	size_t hleft = 0, hright = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->left)
	{
		hleft = 1 + height(tree->left);

	}
	if (tree->right)
	{
		hright = 1 + height(tree->right);
	}
	if (hleft > hright)
	{
		return (hleft);
	}
	return (hright);
}
/**
 * binary_tree_balance - function that measures the
 * balance factor of a binary tree
 * @tree: is a pointer to the root node
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t hright = 0, hleft = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->left)
	{
		hleft = 1 + height(tree->left);
	}
	if (tree->right)
	{
		hright = 1 + height(tree->right);
	}
	return (hleft - hright);
}
