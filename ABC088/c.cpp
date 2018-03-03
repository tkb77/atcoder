#include <iostream>
using namespace std;

int main()
{
    int c[3][3];
    int a[3];
    int b[3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> c[i][j];
        }
    }
    for (int n  = 0; n <= 100; n++) {
        a[0] = n;
        b[0] = c[0][0] - a[0];
        b[1] = c[1][0] - a[0];
        b[2] = c[2][0] - a[0];
        if (c[0][1] < b[0] || c[0][2] < b[0]) {
            continue;
        }
        a[1] = c[0][1] - b[0];
        a[2] = c[0][2] - b[0];
        if (b[1] + a[1] == c[1][1] && b[2] + a[1] == c[2][1] && b[1] + a[2] == c[1][2] && b[2] + a[2] == c[2][2]) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}