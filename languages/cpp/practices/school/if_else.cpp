#include <iostream>

using namespace std;

int main() { 
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) { 
        int n;
        cin >> n;
        if (n > 5) { 
            cout << "Greater than 5\n";
        } else if (n == 5) { 
            cout << "Equal to 5\n";
        } else { 
            cout << "Less than 5\n";
        }
    }
}