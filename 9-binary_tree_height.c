#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height;
if (tree == NULL)
return (0);
right_height = binary_tree_height(tree->right);
left_height = binary_tree_height(tree->left);
return ((left_height != 0 ? left_height + 1 : right_height + 1));
}

