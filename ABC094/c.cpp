#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    int N;
    vector<int> X;

    cin >> N;

    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        X.push_back(a);
    }

    vector<int> Y;
    copy(X.begin(), X.end(), back_inserter(Y));
    sort(Y.begin(), Y.end());

    for (int i = 0; i < N; i++) {
        int index = (Y.size() + 1)/2;

        if(X[i] < Y[index]) {
            cout << Y[index] << endl;
        } 
        else if (X[i] >= Y[index]) {
            cout << Y[index - 1] << endl;
        } 
    }
}