#include <iostream>
#include <vector>
#include <queue>

using namespace std;
using vi = vector<int>;
typedef vector<vi> graph;

enum Color {
    WHITE,
    GRAY,
    BLACK
};

class BFSResult {
    public:
        vector<Color> colors;
        vector<int> distance;
        vector<int> parent;

        BFSResult(
            const vector<Color>& colors, 
            const vector<int>& distance, 
            const vector<int>& parent
        ) : colors(colors), distance(distance), parent(parent) {}
};

graph input_graph() {
    int v, e;
    cin >> v >> e;
    graph adj(v);
    for (int i = 0; i < e; i++) {
        int p1,p2;
        cin >> p1 >> p2;
        adj[p1].push_back(p2);
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

BFSResult bfs(const graph& g, int s) {
    vector<Color> colors(g.size(), WHITE);
    vector<int> distance(g.size(), -1);
    vector<int> parent(g.size(), -1);

    queue<int> q;
    
    colors[s] = GRAY;
    distance[s] = 0;
    parent[s] = -1;

    q.push(s);
    while (!q.empty()) {
        int u = q.front(); 
        q.pop();
        for (int v : g[u]) {
            if (colors[v] == WHITE) {
                colors[v] = GRAY;
                distance[v] = distance[u] + 1;
                parent[v] = u;
                q.push(v);
            }
        }
        colors[u] = BLACK;
    }

    return BFSResult(colors, distance, parent);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    graph g = input_graph();
    BFSResult r = bfs(g, 2);
    for (Color c : r.colors) {
        cout << c << " ";
    }
    cout << endl;
    for (int d : r.distance) {
        cout << d << " ";
    }
    cout << endl;
    for (int p : r.parent) {
        cout << p << " ";        
    }
    cout << endl;
    return 0;
}