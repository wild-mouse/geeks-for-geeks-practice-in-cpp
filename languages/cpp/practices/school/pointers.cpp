#include <iostream>

using namespace std;

void updateVar(int *a) { 
    *a += 10;
    return;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    { 
        int a;
        cin >> a;
        updateVar(&a);
        cout << a << endl;
    }
    
    return 0;
}
