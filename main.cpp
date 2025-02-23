#include <iostream>
#include <cstdlib>
#include <ctime>
#include "matrix.h"
#include <vector>

const int SIZE_A = 5;
const int SIZE_C = 6;
using namespace std;

int main() {
    srand(time(0)); 
        
    vector<vector<int> > matrixA(SIZE_A, vector<int>(SIZE_A));
    vector<vector<int> > matrixC(SIZE_C, vector<int>(SIZE_C));
    
    char choice;

    std::cout << "Populate matrixes? (y/n): ";
    std::cin >> choice;
    bool randomFill = (choice == 'y' || choice == 'Y');

    fillMatrix(matrixA, SIZE_A, SIZE_A, randomFill);
    fillMatrix(matrixC, SIZE_C, SIZE_C, randomFill);

    std::cout << "Initial A:" << std::endl;
    printMatrix(matrixA, SIZE_A, SIZE_A);

    std::cout << "Inicial C:" << std::endl;
    printMatrix(matrixC, SIZE_C, SIZE_C);

    int avgA = calculateDiagonalAverage(matrixA, SIZE_A);
    int avgC = calculateDiagonalAverage(matrixC, SIZE_C);

    replaceNonDiagonalElements(matrixA, SIZE_A, SIZE_A, avgA);
    replaceNonDiagonalElements(matrixC, SIZE_C, SIZE_C, avgC);

    std::cout << "Post Processed A:" << std::endl;
    printMatrix(matrixA, SIZE_A, SIZE_A);

    std::cout << "Post Processed C:" << std::endl;
    printMatrix(matrixC, SIZE_C, SIZE_C);

    return 0;
}
