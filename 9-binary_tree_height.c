#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 * Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hleft = 0, hright = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left)
	{
		hleft = 1 + binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		hright = 1 + binary_tree_height(tree->right);
	}
	if (hright > hleft)
	{
		return (hright);
	}
	return (hleft);
}
