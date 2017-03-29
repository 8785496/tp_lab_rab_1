#pragma once

#include <vector>

class NodeGraph
{
public:
    NodeGraph(int index);
    std::vector<int> &GetVertexes();
    void SetVertexes(std::vector<int> &vertexes);
    bool operator==(const int& right);
    bool visited;
private:
    int index;
    std::vector<int> vertexes;
};
