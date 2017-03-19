#include <iostream>
#include <fstream>
#include <sstream>
#include "App.h"

using namespace std;

void App::Init(int *argc, char **argv) {
    for (int i = 1; i < *argc; ++i) {
        if (string(argv[i]) == "--matrix") {
            char *fname;
            if (i + 1 < *argc)
                fname = argv[i + 1];
            else
                ;//TODO Exception

            int m = 0; // count rows
            ifstream ifs(fname);
            string line;
            while (getline(ifs, line))
                m++;
            int *matrix[m];
            for (int k = 0; k < m; ++k)
                matrix[k] = new int[m];

            int i = 0, j = 0;
            ifs.clear();
            ifs.seekg(0);
            while (getline(ifs, line)) {
                istringstream iss(line);
                for (int j = 0; j < m; ++j)
                    iss >> matrix[i][j];
                i++;
            }

            graph = new Graph(m, m, matrix);
            cout << graph->ToString();
        }
    }
}
