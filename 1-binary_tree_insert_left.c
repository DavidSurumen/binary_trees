#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * If parent already has a left-child, the new node must take its place, and
 * the old left-child must be set as the left-child of the new node.
 *
 * Return: pointer to the new node, or NULL on failure or
 * NULL if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = binary_tree_node(parent, value);

	if (!parent || !newNode)
		return (NULL);

	if (parent->left)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	parent->left = newNode;

	return (newNode);
}
