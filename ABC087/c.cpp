#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int A[2][100];
    int N;
    int max = 0;

    cin >> N;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }

    for (int i = 1; i <= N; i++) {
        int tmp1 = 0;
        int tmp2 = 0;
        
        for (int j = 0; j < i; j++) {
            tmp1 += A[0][j];
        }
        for (int k = i - 1; k < N; k++) {
            tmp2 += A[1][k];
        }
        
        if(max < (tmp1 + tmp2)) {
            max = tmp1 + tmp2;
        }
    }

    cout << max << endl;
    return 0;
}