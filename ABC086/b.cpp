#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;

    int tmp = b;
    unsigned digit = 0;
    while(tmp!=0){
        tmp /= 10;
        digit += 1;
    }

    int num = (a * pow(10, digit)) + b;
    
    for (int i = 1; i < 400; i++) {
        if((i * i) == num) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}