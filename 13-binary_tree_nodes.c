#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: is a pointer to the root node of the tree to
 * count the number of nodes
 * Return: the number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->left || tree->right)
	{
		n = 1;
	}
	n = 1 + binary_tree_nodes(tree->left);
	n = 1 + binary_tree_nodes(tree->right);

	return (n);

}
