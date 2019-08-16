#include <iostream>

using namespace std;

int calcSum(int a, int b, int c) { 
    return a + b + c;
}

int main() { 
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) { 
        int a, b, c;
        cin >> a >> b >> c;
        cout << calcSum(a, b, c) << endl;
    }
}
