#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert node :wq
 * as left-child of another node
 * @parent: ptr to node to insertleft-child in.
 * @value:new node value
 * Return: ptr to new node.
 *	If parent is NULL or an error occurs - NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr;

	if (parent == NULL)
		return (NULL);

	ptr = binary_tree_node(parent, value);
	if (ptr == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		ptr->left = parent->left;
		parent->left->parent = ptr;
	}
	parent->left = ptr;

	return (ptr);
}
