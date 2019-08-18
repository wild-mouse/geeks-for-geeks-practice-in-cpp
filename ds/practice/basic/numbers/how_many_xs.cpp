#include <iostream>
#include <string>

using namespace std;

int main() {
     int t;
     cin >> t;
     while (t--) {
         char x;
         int l, u;
         cin >> x >> l >> u;
         int c = 0;
         for (int i = l + 1; i < u; i++) {
             string s = to_string(i);
             for (auto j = s.begin(); j != s.end(); j++) {
                 if (*j == x) {
                     c++;
                 }
             }
//             c += count(s.begin(), s.end(), x);
         }
         cout << c << endl;
     }

     return 0;
}