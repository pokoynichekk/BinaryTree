#pragma once

#ifndef BINARYTREE_H
#define BINARYTREE_H

#include "BinaryTreeNode.h"

/// @brief �������� ������.
struct BinaryTree
{
	BinaryTreeNode* Root;
};

/// @brief ������������� ������.
/// @param binaryTree ��������� �� ���� �����.
void InitializeTree(BinaryTree* binaryTree);

/// @brief ����� ��������.
/// @param node  ��������� �� ���� �����.
/// @param value �������� ������� ���� �����.
/// @return		 ��������� �� ���� ���������� ��������.
BinaryTreeNode* Find(BinaryTreeNode* node, const int value);

/// @brief ����� ������������ ��������.
/// @param node ��������� �� ���� �����.
/// @return		��������� �� ���� ���������� ��������.
BinaryTreeNode* FindMinimal(BinaryTreeNode* node);

/// @brief ����� ������������� ��������.
/// @param node ��������� �� ���� �����.
/// @return		��������� �� ���� ���������� ��������.
BinaryTreeNode* FindMaximal(BinaryTreeNode* node);

/// @brief ������� �������.
/// @param node  ��������� �� ���� �����.
/// @param value �������� ������� ���� ��������.
void Insert(BinaryTreeNode*& node, const int value);

/// @brief �������� ��������.
/// @param node		��������� �� ���� �����.
/// @param value	�������� ������� ���� �������.
void Remove(BinaryTreeNode*& node, const int value);

/// @brief ������� ������.
/// @param node �������� �� ���� �����.
void FreeTree(BinaryTreeNode* node);


#endif //BINARYTREE_H
