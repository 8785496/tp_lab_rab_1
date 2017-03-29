#pragma once
#include <vector>
#include <string>
#include "NodeGraph.h"

using namespace std;

class GraphBase {
protected:
    //vector<vector<int>> list;
    vector<NodeGraph> list;
public:
    GraphBase(int m, int n, int **matrix);
    GraphBase(vector<vector<int>> &list);
};

