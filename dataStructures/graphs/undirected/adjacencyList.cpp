#include <iostream>
#include <vector>
#include <cstdio>

#define vi vector<int>

using namespace std;
typedef vector<vi> graph;


graph input_graph() {
    int v, e;
    cin >> v >> e;
    graph adj(v);
    for (int i = 0; i < e; i++) {
        int p1,p2;
        cin >> p1 >> p2;
        adj[p1].push_back(p2);
        adj[p2].push_back(p1);
    }
    return adj;
}

void output_graph(const graph& g) {
    for (int i = 0; i < g.size(); i++) {
        cout << i << ": ";
        for (int j = 0; j < g[i].size(); j++) {
            cout << g[i][j] << " ";
        }
        cout << "\n";
    }
} 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    graph g = input_graph();
    output_graph(g);
    return 0;
}