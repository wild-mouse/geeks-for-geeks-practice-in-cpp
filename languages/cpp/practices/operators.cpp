#include <iostream>

using namespace std;

int main() { 
    int t;
    cin >> t;
    for (int i = 0; i < 2; i++) { 
        int a, b;
        cin >> a >> b;
        cout << a + b << endl;
        if (a > b) { 
            cout << a - b << endl;
            cout << a / b << endl;
        } else { 
            cout << b - a << endl;
            cout << b / a << endl;
        }
        cout << a * b << endl;
    }
}