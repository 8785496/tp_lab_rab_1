//
// Created by User on 20.03.2017.
//

#include "GraphNode.h"


GraphNode::GraphNode(int index)
{
    this->index = index;
}

std::vector<int> &GraphNode::GetVertexes() {
    return vertexes;
}

void GraphNode::SetVertexes(std::vector<int> &vertexes) {
    this->vertexes = vertexes;
}
