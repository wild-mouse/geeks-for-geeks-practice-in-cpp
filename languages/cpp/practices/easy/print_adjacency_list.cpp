#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t = 0;
    cin >> t;
    while (t--) {
        int v = 0, e = 0;
        cin >> v >> e;
        vector<int> g[1000] = { vector<int>() };
        while (e--) {
            int v1 = 0, v2 = 0;
            cin >> v1 >> v2;
            g[v1].push_back(v2);
            g[v2].push_back(v1);
        }
//        for (int i = 0; i < v; i++) {
//            for (int j = 0; j < v; j++) {
//                cout << g[i][j] << " ";
//            }
//            cout << endl;
//        }
        for (int i = 0; i < v; i++) {
            cout << i;
            vector<int> vv = g[i];
            for (auto j = vv.begin(); j != vv.end(); j++) {
                    cout << "-> " << *j;
            }
            cout << endl;
        }
    }
    return 0;
}