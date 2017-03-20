#include <gtest/gtest.h>
#include <GraphBase.h>
#include <vector>
#include <string>
#include <App.h>
#include <fstream>
#include <GraphWrite.h>

TEST(GraphCreate, FromMatrix) {
    string result = "0 1 \n1 0 \n";
    int **matrix = new int*[2] {new int[2] {0, 1}, new int[2] {1, 0}};
    GraphWrite graph(2, 2, matrix);

    ASSERT_EQ(result, graph.ToString());
}

TEST(GraphCreate, FromList) {
    string result = "0 1 1 \n1 0 1 \n1 1 0 \n";
    vector<vector<int>> list;
    vector<int> vertexes;

    vertexes.push_back(1);
    vertexes.push_back(2);
    list.push_back(vertexes);

    vertexes.clear();
    vertexes.push_back(0);
    vertexes.push_back(2);
    list.push_back(vertexes);

    vertexes.clear();
    vertexes.push_back(0);
    vertexes.push_back(1);
    list.push_back(vertexes);

    GraphWrite graph(list);

    ASSERT_EQ(result, graph.ToString());
}

TEST(Argument, FromMatrix)
{
    char *fname = (char*)"matrix.txt";
    string outText;
    ofstream ofs(fname);
    ofs << "0 1" << endl;
    ofs << "1 0" << endl;
    ofs.close();

    testing::internal::CaptureStdout();

    App app;
    int argc = 3;
    char *argv[] = {(char*)"", (char*)"--matrix", fname};
    app.Init(&argc, argv);

    string output = testing::internal::GetCapturedStdout();

    ASSERT_EQ("0 1 \n1 0 \n", output);
}