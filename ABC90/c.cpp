#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int N, M;
    int count = 0;

    cin >> N;
    cin >> M;

    vector< vector<int> > arr;
	arr.resize(N);
	for( int i=0; i<N; i++ ){
		arr[i].resize(M);
	}

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            for (int k = -1; k <= 1; k++) {
                for (int l = -1; l <= 1; l++) {
                    if(i + k >= 0 && i + k < N && j + l >= 0 && j + l < M) {
                        if(arr[i + k][j + l] == 1) {
                            arr[i + k][j + l] = 0;
                        } else if (arr[i + k][j + l] == 0) {
                            arr[i + k][j + l] = 1;
                        }
                    }
                }
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (arr[i][j] == 1 ){
                count += 1;
            }
        }
    }
    
    cout << count << endl;
}