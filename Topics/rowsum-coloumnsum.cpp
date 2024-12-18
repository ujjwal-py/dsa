#include <iostream>
using namespace std;
int main() {
    int mat[3][3] = {1,2, 3, 4, 5, 6};
    // int csum1 = 0;
    // int csum2 = 0;
    // int csum3 = 0;
    // int rsum1 = 0;
    // int rsum2 = 0;
    // int rsum3 = 0;
    int rsum[3] = {0};
    int csum[3] = {0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            rsum[i] += mat[i][j];
            csum[i] += mat[i][j];
        }
        // rsum1 += mat[0][i];
        // rsum2 += mat[1][i];
        // rsum3 += mat[2][i];
        // csum1 += mat[i][0];
        // csum2 += mat[i][1];
        // csum3 += mat[i][2];
         
    }
    for (int i = 0; i < 3; i++) {
        cout << rsum[i] << " ";

    }
}