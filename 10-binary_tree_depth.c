#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t left_height, right_height;
if (tree == NULL)
return (0);
right_height = binary_tree_depth(tree->right);
left_height = binary_tree_depth(tree->left);
return ((left_height != 0 ? left_height + 1 : right_height + 1));
}
