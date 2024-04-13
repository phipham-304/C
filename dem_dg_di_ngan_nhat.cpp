#include <iostream>
#include <vector>
#include <queue>
#include <bits/stdc++.h>

using namespace std;
const long long mod = 1e9+7;
const int maxN = 1000000;
vector<int> g[maxN];
long long  dist[maxN];
long long ways[maxN];

void bfs(int s, int n) {
    fill_n(dist, n+5, -1);
    fill_n(ways, n+5, 0);
    queue<int> q;
    q.push(s);
    dist[s] = 0;
    ways[s] = 1;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (auto v : g[u]) {
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                ways[v] = ways[u];
                q.push(v);
            } else if (dist[v] == dist[u] + 1) {
                ways[v] += ways[u] ;
                ways[v]%=mod;
            }
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < M; ++i) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for (int u = 1; u <= N; ++u) {
        sort(g[u].begin(), g[u].end());
    }
    bfs(1,N);
	
    cout << ways[N] << endl;

    return 0;
}

