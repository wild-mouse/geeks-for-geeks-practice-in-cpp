#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string a, b;
        cin >> a >> b;
        if (a.length() > b.length())
        {
            cout << a.length() << endl;
        }
        else
        {
            cout << b.length() << endl;
        }
        cout << a + b << endl;
    }
}