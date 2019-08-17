#include <iostream>
#include <vector>
#include <queue>

using namespace std;

/*This is a function problem.You only need to complete the function given below*/
/* You have to complete this function*/
/* Function to do BFS of graph
*  adj[]: array of vectors
*  vis[]: array to keep track of visited nodes
*/
void bfs(int s, vector<int> adj[], bool vis[], int N) {
    // Your code here
    queue<int> q = queue<int>();
    for (int i = 0; i < adj->size(); i++)
    {

    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> N >> E;
        vector<int> adj[100];
        bool vis[100] = {false};
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        bfs(0, adj, vis, N);
        cout << endl;
    }
}

