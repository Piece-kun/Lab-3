#include "matrix.h"

void fillMatrix(vector<vector<int>>& matrix, int rows, int columns, bool randomFill) {
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < columns; j++) {
            if (randomFill)
                matrix[i][j] = rand() % 100; //  [0,99]
            else {
                std::cout << "Input [" << i << "][" << j << "]: ";
                std::cin >> matrix[i][j];
            }
        }
    }
}

void printMatrix(vector<vector<int>>& matrix, int rows, int columns) {
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < columns; j++) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << "\n";
    }
}


int calculateDiagonalAverage(vector<vector<int>>& matrix, int size) {
    int sum = 0, count = 0;
    for (size_t i = 0; i < size; i++) {
        sum += matrix[i][i]; 
        count++;
        if (i != size - i - 1) { 
            sum += matrix[i][size - i - 1]; 
            count++;
        }
    }
    return sum / count;
}

void replaceNonDiagonalElements(vector<vector<int>>& matrix, int rows, int columns, int avg) {
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < columns; j++) {
            if (i != j && i != columns - j - 1) {
                matrix[i][j] = avg;
            }
        }
    }
}