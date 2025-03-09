#include <iostream>
#include "constants.h"
#include "nested_loops.h"
#include "baseline.h"

using namespace std;

int main()
{
    constexpr int arr2DTest1 [NUM][NUM] = {{16,3,2,13},{5,10,11,8},{9,6,7,12},{4,15,14,1}};
    constexpr int arr2DTest2 [NUM][NUM] = { {1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4} };

    // Test using Nested Loops
    cout << "Using Nested Loops: Test 1: Expected 1 - Test " << isMagicSquare(arr2DTest1) << endl;
    cout << "Using Nested Loops: Test 2: Expected 0 - Test " << isMagicSquare(arr2DTest2) << endl;

    cout << endl;

    // Test using Test Against Baseline
    cout << "Using Test Against Baseline: Test 1: Expected 1 - Test " << isMagicSquareUsingTestAgainstBaseline(arr2DTest1) << endl;
    cout << "Using Test Against Baseline: Test 2: Expected 0 - Test " << isMagicSquareUsingTestAgainstBaseline(arr2DTest2) << endl;

    return 0;
}