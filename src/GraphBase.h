#pragma once
#include <vector>
#include <string>

using namespace std;

class Graph {
    vector<vector<int>> list;
public:
    Graph(int m, int n, int **matrix);
    Graph(vector<vector<int>> list);
    string ToString();
};

