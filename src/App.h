#pragma once
#include "GraphBase.h"

class App
{
    Graph *graph;
    void InitFromFile(char *);
public:
    void Init(int *argc, char **argv);
};
