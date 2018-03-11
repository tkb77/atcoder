#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <fstream>
using namespace std;

int main()
{
    int A, B;
    string s;
    int count = 0;

    cin >> A;
    cin >> B;

    for (int i = A; i <= B; i++) {
        s = to_string(i);

        if(s[0] == s[4] && s[1] == s[3]) {
            count += 1;
        }
    }
    
    cout << count << endl;
}