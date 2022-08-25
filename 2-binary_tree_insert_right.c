#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of
 *		another node.
 * @parent: pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 *
 * Must replace right child if it exists, and have it as
 * right child of new node.
 *
 * Return: pointer to the created node, or NULL on failure
 *	or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = binary_tree_node(parent, value);
	if (!new_node || !parent)
		return (NULL);

	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
