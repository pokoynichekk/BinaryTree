#pragma once

#ifndef TREAP_H
#define TREAP_H

#include "TreapNode.h"

/// @brief ��������� ������.
struct Treap
{
	TreapNode* Root;
};

/// @brief ������������� ������.
/// @param treap ��������� �� ������.
void InitializeTree(Treap* treap);

/// @brief ����� �������� �� ��������.
/// @param node		��������� �� ���� ������.
/// @param value	�������� ��� ������.
/// @return			��������� �� ���� ���������� ��������.
TreapNode* Find(TreapNode* node, const int value);

/// @brief ���������� ������.
/// @param node		��������� �� ���� �����.
/// @param key		���� �� �������� ����������� ����������.
/// @param left		���������� ��������� �� ���� ������ �����.
/// @param right	���������� ��������� �� ���� ������� �����.
void Split(TreapNode* node, const int key, TreapNode*& left, TreapNode*& right);

/// @brief ������� ���� ��������.
/// @param left		����� ��������� ���� ������.
/// @param right	������ ��������� ���� ������.
/// @return			��������� �� ���� ������������ ������.
TreapNode* Merge(TreapNode* left, TreapNode* right);

/// @brief ������� ��������(�� ��������������, �� ���������� Merge � Split).
/// @param node		��������� �� ���� �����.
/// @param key		�������� ��� �������.
/// @param priority ���������(��������� �� �����a���).
void InsertNotOptimized(TreapNode*& node, int key, int priority = rand());

/// @brief �������� ��������(�� ��������������, �� ���������� Merge � Split).
/// @param node ��������� �� ���� �����.
/// @param key	��������� ��������.
void RemoveNotOptimized(TreapNode*& node, int key);

/// @brief ������� ��������.
/// @param node		��������� �� ���� �����.
/// @param key		�������� ��� �������.
/// @param priority ���������(��������� �����������).
void Insert(TreapNode*& node, int key, int priority = rand());

/// @brief �������� ��������.
/// @param node ��������� �� ���� �����.
/// @param key	��������� ��������.
void Remove(TreapNode*& node, int key);

/// @brief ������� ������.
/// @param node �������� �� ���� �����.
void FreeTree(TreapNode* node);

#endif //BINARYTREE_H