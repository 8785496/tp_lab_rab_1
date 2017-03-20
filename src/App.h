#pragma once
#include "GraphBase.h"
#include "GraphWrite.h"

class App
{
    GraphWrite *graph;
    void InitFromMatrix(char *);
    void InitFromList(char *);
public:
    void Init(int *argc, char **argv);
};
