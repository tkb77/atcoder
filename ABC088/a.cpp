#include <iostream>
using namespace std;

int main()
{
    int N;
    int A;

    cin >> N;
    cin >> A;

    int R = N % 500;
    if(R <= A) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}