#pragma once

#ifndef BINARYTREENODE_H
#define BINARYTREENODE_H

/// @brief Узел Бинарного Дерева.
struct BinaryTreeNode
{
	BinaryTreeNode* Left = nullptr;
	BinaryTreeNode* Right = nullptr;
	int Data;
};

#endif //BINARYTREENODE_H