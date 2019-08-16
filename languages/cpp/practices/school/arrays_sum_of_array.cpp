#include <iostream>

using namespace std;

int main() { 
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) { 
        int n;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++) { 
            cin >> a[j];
        }
        int sum = 0;
        for (int j = 0; j < n; j++) { 
            sum += a[j];
        }
        cout << sum << endl;
    }
}