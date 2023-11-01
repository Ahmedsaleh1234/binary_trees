#include "binary_trees.h"
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));


       	if (parent == NULL)
       	{
	       	return (NULL);
       	}

	newnode->n = value;
	if (newnode == NULL)
	{
		return (NULL);
	}	
       	if (parent->left != NULL)
       	{
	       	newnode->left = parent->left;
	       	parent->left->parent = newnode;
       	}
	else
	{
	parent->left = newnode;
	}
	return (newnode);
}
