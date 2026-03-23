#include <stdio.h>

int este_valid(int grid[9][9], int r, int c, int n) {
    for (int i = 0; i < 9; i++) 
        if (grid[r][i] == n || grid[i][c] == n) return 0;
    int sr = r - r % 3, sc = c - c % 3;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (grid[i + sr][j + sc] == n) return 0;
    return 1;
}

int rezolva_sudoku(int grid[9][9]) {
    for (int r = 0; r < 9; r++) {
        for (int c = 0; c < 9; c++) {
            if (grid[r][c] == 0) {
                for (int n = 1; n <= 9; n++) {
                    if (este_valid(grid, r, c, n)) {
                        grid[r][c] = n;
                        if (rezolva_sudoku(grid)) return 1;
                        grid[r][c] = 0;
                    }
                }
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    int sudoku[9][9] = {
        {0,0,0,0,0,0,0,0,8}, {1,8,0,0,0,2,3,0,0}, {0,6,0,0,5,7,0,0,1},
        {0,7,0,9,6,0,0,0,0}, {0,9,0,7,0,4,0,1,0}, {0,0,0,0,8,1,0,4,0},
        {6,0,0,2,4,0,0,8,0}, {0,0,4,5,0,0,0,9,3}, {5,0,0,0,0,0,0,0,0}
    };

    if (rezolva_sudoku(sudoku)) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) printf("%d ", sudoku[i][j]);
            printf("\n");
        }
    }
    return 0;
}
