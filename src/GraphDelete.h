#include "GraphFind.h"

class GraphDelete : public GraphFind
{
public:
    GraphDelete(int m, int n, int **matrix);
    void Del(int index);
};
