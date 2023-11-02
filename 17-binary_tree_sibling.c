#include "binary_trees.h"
/**
 * binary_tree_sibling -  function that finds the sibling of a node
 * @node:  is a pointer to the node to find the sibling
 * Return: NULL or sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *p;

	if (!node || !node->parent)
	{
		return (NULL);
	}
	p = node->parent;
	if (p->left == node)
	{
		return (p->right);
	}
	return (p->left);
}
