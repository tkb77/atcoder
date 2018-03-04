#include <iostream>
#include <cmath>
using namespace std;

bool IsEven(int num){
    if(num % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main()
{
    int A[100000][3];
    int N;

    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }

    int now_time = 0;
    int now_x = 0;
    int now_y = 0;
    for (int i = 0; i < N; i++) {
        int t = A[i][0] - now_time;
        int dist = abs(A[i][1] - now_x) + abs(A[i][2] - now_y);

        if(dist > t || IsEven(dist) != IsEven(t)) {
            cout << "No" << endl;
            return 0;
        } 

        now_time = A[i][0];
        now_x = A[i][1];
        now_y = A[i][2];
    }
    cout << "Yes" << endl;

    return 0;
}