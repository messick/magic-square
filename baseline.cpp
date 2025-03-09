//
// Created by Nick Messick on 3/9/25.
//

#include "constants.h"
#include "baseline.h"


bool isMagicSquareUsingTestAgainstBaseline(const int arr2D[][NUM]) {
    // grab a baseline sum from first row
    int baseline = sumOfRow(0, arr2D);

    // check diags first
    if (sumOfDiag(true, arr2D) != baseline || sumOfDiag(false, arr2D) != baseline) {
        return false;
    }

    // check rows and columns
    for (int i = 0; i < NUM; i++) {
        if (sumOfRow(i, arr2D) != baseline || sumOfCol(i, arr2D) != baseline) {
            return false;
        }
    }

    return true;
}

int sumOfRow(const int rowIndex, const int arr2D[][NUM]) {
    int returnVal = 0;
    for (int i = 0; i < NUM; i++) {
        returnVal += arr2D[rowIndex][i];
    }

    return returnVal;
}

int sumOfCol(const int colIndex, const int arr2D[][NUM]) {
    int returnVal = 0;
    for (int i = 0; i < NUM; i++) {
        returnVal += arr2D[i][colIndex];
    }

    return returnVal;
}

int sumOfDiag(const bool topLeft, const int arr2D[][NUM]) {
    int returnVal = 0;

    // either checking top left to bottom right, or top right to bottom left.
    if (topLeft) {
        for (int i = 0; i < NUM; i++) {
            returnVal += arr2D[i][i];
        }
    } else {
        for (int i = NUM-1; i >= 0; i--) {
            returnVal += arr2D[i][i];
        }
    }

    return returnVal;
}