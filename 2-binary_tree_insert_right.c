#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as a left-child of
 *      of another node
 * @parent: ptr to node to insert left-child
 * @value: new node value
 * Return: ptr to new node.
 *      If parent is NULL or an error occurs - NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *ptrnn;

	if (parent == NULL)
	{
		return (NULL);
	}

	ptrnn = binary_tree_node(parent, value);
	if (ptrnn == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		ptrnn->right = parent->right;
		parent->right->parent = ptrnn;
	}
	parent->right = ptrnn;
	return (ptrnn);
}
