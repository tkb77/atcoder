#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    int Alice = 0;
    int Bob = 0;
    vector<int> data;

    cin >> N;

    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        data.push_back(a);
    }

    sort(data.begin(), data.end(), greater<int>());

    for (int i = 0; i < N; i++) {
        if(i % 2 == 0) {
            Alice += data[i];
        } else {
            Bob += data[i];
        }
    }

    cout << Alice - Bob << endl;
}