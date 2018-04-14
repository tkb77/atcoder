#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    int M;
    int X;
    int cost1 = 0;
    int cost2 = 0;
    vector<int> A;

    cin >> N;
    cin >> M;
    cin >> X;

    for (int i = 0; i < M; i++) {
        int a;
        cin >> a;
        A.push_back(a);
    }

    for (int i = 0; i < M; i++) {
        if(A[i] < X) {
            cost1 += 1;
        }
    }

    for (int i = 0; i < M; i++) {
        if(A[i] > X) {
            cost2 += 1;
        }
    }

    if(cost1 >= cost2) {
        cout << cost2 << endl;
    } else {
        cout << cost1 << endl;
    }
    
}