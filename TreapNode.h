#pragma once

#ifndef TREAPNODE_H
#define TREAPNODE_H

/// @brief Узел Декартового Дерева.
struct TreapNode
{
	int Key;
	int Priority;
	TreapNode* Left = nullptr;
	TreapNode* Right = nullptr;
};

#endif //TREAPNODE_H