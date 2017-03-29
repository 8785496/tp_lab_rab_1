//
// Created by User on 20.03.2017.
//

#include "NodeGraph.h"


NodeGraph::NodeGraph(int index)
{
    this->index = index;
}

std::vector<int> &NodeGraph::GetVertexes() {
    return vertexes;
}

void NodeGraph::SetVertexes(std::vector<int> &vertexes) {
    this->vertexes = vertexes;
}

bool NodeGraph::operator==(const int &right) {
    return index == right;
}
