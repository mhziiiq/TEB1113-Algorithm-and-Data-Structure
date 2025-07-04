/* 
Muhammad Haziq bin Rahmathullah Khan
22011027
Lab 2-Easy
*/


#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    const int N = 3;
    int arr[N][N] = {
        {1, 0, 3},
        {2, 5, 6},
        {9, 4, 8}
    };

    int* ptr = (int*)arr;
    sort(ptr, ptr + N * N);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }

    return 0;
}