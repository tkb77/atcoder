#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <fstream>
using namespace std;

int main()
{
    int A;
    int B;
    int X;

    cin >> A;
    cin >> B;
    cin >> X;

    if(A + B > X && A <= X) {
        cout << "YES" << endl;
    } else {
        cout << "NO"<< endl;
    }
}