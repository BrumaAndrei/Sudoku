// Problem: Sudoku
#include <iostream>
using namespace std;

int main()
{
    int i, j, m[10][10], corect = 1;
    for (i = 1; i <= 9; ++i)
        for (j = 1; j <= 9; ++j)
        cin >> m[i][j];
     for (i = 1; i <= 9 && corect == 1; ++i) {
            int v[10] = {};
        for (j = 1; j <= 9; ++j) {
            ++v[m[i][j]];
        }
    for (int i = 1; i <= 9; ++i) {
        if(v[i] == 1)
            corect = 1;
        else if(v[i] > 1 || v[i] < 1) {
            corect = 0;
            break ;
            }
    }
    }
    if(corect == 1) {
        for (j = 1; j <= 9 && corect == 1; ++j) {
           int v[10] = {};
        for (i = 1; i <= 9; ++i) {
            ++v[m[i][j]];
        }
    for (int i = 1; i <= 9; ++i) {
        if(v[i] == 1)
            corect = 1;
        else if(v[i] > 1 || v[i] < 1) {
            corect = 0;
            break ;
            }
    }
    }
    }
    if(corect == 1) {
        for (i = 1; i <= 9 && corect == 1; i += 3) {
            for (j = 1; j <= 9 && corect == 1; j += 3) {
                int v[10] = {};
                for (int l = i; l <= i + 2; ++l)
                    for (int c = j; c <= j + 2; ++c)
                    ++v[m[l][c]];
                for (int i = 1; i <= 9; ++i) {
                    if(v[i] == 1)
                        corect = 1;
                    else if(v[i] > 1 || v[i] < 1) {
                        corect = 0;
                        break ;
                    }
                }
            }
        }
    }
    if  (corect == 1)
        cout << "corect";
    else
        cout << "incorect";
    return 0;
}
