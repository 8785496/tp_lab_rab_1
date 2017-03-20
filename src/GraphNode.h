#pragma once

#include <vector>

class GraphNode
{
public:
    GraphNode(int index);
    std::vector<int> &GetVertexes();
    void SetVertexes(std::vector<int> &vertexes);
private:
    int index;
    std::vector<int> vertexes;
};
