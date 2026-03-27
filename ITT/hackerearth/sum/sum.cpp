#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAXN = 200005;
const int LOGN = 20;

vector<int> adj[MAXN];
int up[MAXN][LOGN], depth[MAXN];

void dfs(int u, int p, int d) {
    depth[u] = d;
    up[u][0] = p;
    for (int i = 1; i < LOGN; i++) {
        up[u][i] = up[up[u][i - 1]][i - 1];
    }
    for (int v : adj[u]) {
        if (v != p) dfs(v, u, d + 1);
    }
}

int get_lca(int u, int v) {
    if (depth[u] < depth[v]) swap(u, v);
    for (int i = LOGN - 1; i >= 0; i--) {
        if (depth[u] - (1 << i) >= depth[v]) u = up[u][i];
    }
    if (u == v) return u;
    for (int i = LOGN - 1; i >= 0; i--) {
        if (up[u][i] != up[v][i]) {
            u = up[u][i];
            v = up[v][i];
        }
    }
    return up[u][0];
}

void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) adj[i].clear();
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, 1, 0);

    int q;
    cin >> q;
    while (q--) {
        int u, v;
        cin >> u >> v;
        int lca = get_lca(u, v);
        int dist = depth[u] + depth[v] - 2 * depth[lca];

        if (dist % 2 == 1) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
            // The cycle length is dist + 1
            cout << 1 << " " << dist + 1 << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
