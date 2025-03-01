#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

void fillMatrix(vector<vector<int> >& matrix, int rows, int columns, bool randomFill);

void printMatrix(vector<vector<int> >& matrix, int rows, int columns);

int calculateDiagonalAverage(vector<vector<int> >& matrix, int size);

void replaceNonDiagonalElements(vector<vector<int> >& matrix, int rows, int columns, int avg);