#include <vector>
#include <string>
#include <sstream>

#include "GraphBase.h"

using namespace std;

Graph::Graph(int m, int n, int **matrix) {
    for (int i = 0; i < m; ++i) {
        vector<int> vertexes;
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] == 1) {
                vertexes.push_back(j);
            }
        }
        list.push_back(vertexes);
    }
}

string Graph::ToString() {
	const int m = list.size();
	int **matrix = new int*[m];
	for (int i = 0; i < m; ++i)
		matrix[i] = new int[m];
    //int matrix[m][m];

    for (int i = 0; i < m; ++i) {
        for (int k = 0; k < m ; ++k) {
            matrix[i][k] = 0;
        }
        vector<int> vertexes = list[i];
        for (int j = 0; j < vertexes.size(); ++j) {
            int vertex = vertexes[j];
            matrix[i][vertex] = 1;
        }
    }

    stringstream ss;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            ss << matrix[i][j] << ' ';
        }
        ss << endl;
    }

	for (int i = 0; i < m; ++i)
		delete[] matrix[i];

    return ss.str();
}

Graph::Graph(vector<vector<int>> list) {
    this->list = list;
}

