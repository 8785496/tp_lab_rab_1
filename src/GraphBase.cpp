#include <vector>
#include <string>
#include <sstream>

#include "GraphBase.h"
#include "GraphNode.h"

using namespace std;

GraphBase::GraphBase(int m, int n, int **matrix) {
    for (int i = 0; i < m; ++i) {
        GraphNode graphNode(i);
        vector<int> &vertexes = graphNode.GetVertexes();

        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] == 1) {
                vertexes.push_back(j);
            }
        }
        list.push_back(graphNode);
//        vector<int> vertexes;
//        for (int j = 0; j < n; ++j) {
//            if (matrix[i][j] == 1) {
//                vertexes.push_back(j);
//            }
//        }
//        list.push_back(vertexes);
    }
}

GraphBase::GraphBase(vector<vector<int>> &list) {
    auto it = list.begin();
    int i = 0;
    while(it != list.end()) {
        GraphNode graphNode(i);
        graphNode.SetVertexes(*it);
        this->list.push_back(graphNode);
        ++it;
        ++i;
    }
}

