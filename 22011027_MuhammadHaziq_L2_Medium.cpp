/* 
Muhammad Haziq bin Rahmathullah Khan
22011027
Lab 2-Medium
*/


#include <iostream>
using namespace std;

int main() {
    const int rows = 3;
    const int cols = 3;
    int mat[rows][cols] = {
        {3, 30, 38},
        {20, 52, 54},
        {35, 60, 69}
    };

    int x = 52;
    bool found = false;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat[i][j] == x) {
                found = true;
                break;
            }
        }
        if (found) break;
    }

    if (found)
        cout << "true";
    else
        cout << "false";

    return 0;
}
