#pragma once

#include "GraphBase.h"

class GraphWrite : GraphBase
{
public:
    GraphWrite(int m, int n, int **matrix);

    GraphWrite(vector<vector<int>> &list);

    string ToString();
};
