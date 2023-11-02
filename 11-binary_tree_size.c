#include "binary_trees.h"
/**
 * binary_tree_size - a function that measures the size of a binary tree
 * @tree: s a pointer to the root node of the tree to measure the size
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, hleft = 0, hright = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
		hleft = binary_tree_size(tree->left);
		hright = binary_tree_size(tree->right);
		size = 1 + hright + hleft;
	}
	return (size);

}
