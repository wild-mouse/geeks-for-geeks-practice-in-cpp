#include <iostream>
#include <array>

using namespace std;

int binarySearch(int a[], int size, int target) 
{
    int left, mid, right;
    left = 0;
    right = size;
    while (left < right) { 
        mid = (left + right) / 2;
        int c = a[mid];
        if (c == target) 
        {
            return 1;
        } else if (c > target) { 
            right = mid;
        } else { 
            left = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int i = binarySearch(a, n, k);
        cout << i << endl;
    }

    return 0;
}

