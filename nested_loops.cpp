//
// Created by Nick Messick on 3/9/25.
//

#include "constants.h"
#include "nested_loops.h"

bool isMagicSquare(const int arr2D[NUM][NUM]) {
    return areDiagsEqual( arr2D) && areRowColumnsEqual(arr2D);
}

// Test each diagonal against the other, starting from top corners
bool areDiagsEqual(const int arr2D[NUM][NUM]) {
    int topLeft = 0, topRight = 0;

    for (int i = 0; i < NUM; i++) {
        topLeft += arr2D[i][i];
        topRight += arr2D[i][NUM - i - 1];
    }

    return topLeft == topRight;
}

// Test each row and column at index i against either row or column also at index i
bool areRowColumnsEqual(const int arr2D[NUM][NUM]) {
    for (int i = 0; i < NUM; i++) {

        int rowTotal = 0, columnTotal = 0;

        for (int j = 0; j < NUM; j++) {
            rowTotal += arr2D[i][j];
            columnTotal += arr2D[j][i];
        }

        if (rowTotal != columnTotal) {
            return false;
        }
    }

    return true;
}