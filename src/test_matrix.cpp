#include <iostream>
#include <cassert>
#include "matrix.h"

void test_calculateDiagonalAverage() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int avg = calculateDiagonalAverage(matrix, 3);
    std::cout << "Diagonal Average: " << avg << std::endl;
    assert(avg == 5); // (1+5+9+3+7)/5 = 5
}

void test_replaceNonDiagonalElements() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int avg = 5;
    replaceNonDiagonalElements(matrix, 3, 3, avg);

    assert(matrix[0][1] == avg);
    assert(matrix[1][0] == avg);
    assert(matrix[1][2] == avg);
    assert(matrix[2][1] == avg);

    std::cout << "Non-diagonal elements replaced successfully.\n";
}

int main() {
    test_calculateDiagonalAverage();
    test_replaceNonDiagonalElements();
    std::cout << "All tests passed.\n";
    return 0;
}
