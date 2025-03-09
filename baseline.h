//
// Created by Nick Messick on 3/9/25.
//

#ifndef BASELINE_H
#define BASELINE_H

/**
* When I sat down and initially completed this project, I came up with my "Test Against Baseline" solution.  While it
* is not the most efficient as it runs multiple separate loops, it's more exact as it ensures the sums of all
* rows/columns/diagonals of a square are equal against the others.  Also, it'd be easier to unit test everything if I
* were to do so.
*
* However, since nested loops were brought up in class, and I believe you even specially called out their use for our
* project, I figured you'd be looking for that instead.  So implemented that solution as well.  The downside is that
* only one pair of rows/columns/diagonals is compared at once.  I don't know enough about magic squares to know if that
* it's possible to have a false positive with this approach, but that's one way in which my less efficient solution is
* better.
**/

bool isMagicSquareUsingTestAgainstBaseline(const int [][NUM]);
int sumOfRow(int rowIndex, const int [][NUM]);
int sumOfCol(int colIndex, const int [][NUM]);
int sumOfDiag(bool topLeft, const int [][NUM]);

#endif //BASELINE_H
