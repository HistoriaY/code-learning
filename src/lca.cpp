// const int maxn = 5e5 + 1;
// const int maxm = 5e5 + 1;
// int n, m;

// int fa[maxn][32];
// int dep[maxn];

// vector<int> adj[maxn];

// void dfs(int u, int father)
// {
//     fa[u][0] = father;
//     dep[u] = dep[father] + 1;
//     for (int i = 1; i < 32; ++i)
//         fa[u][i] = fa[fa[u][i - 1]][i - 1];
//     for (auto v : adj[u])
//     {
//         if (v != father)
//             dfs(v, u);
//     }
// }

// int lca(int a, int b)
// {
//     if (dep[a] > dep[b])
//         swap(a, b);
//     int dif = dep[b] - dep[a];
//     for (int j = 0; dif; ++j)
//     {
//         if (dif & 1)
//             b = fa[b][j];
//         dif >>= 1;
//     }
//     if (a == b)
//         return a;
//     for (int i = 31; i >= 0; --i)
//     {
//         if (fa[a][i] != fa[b][i])
//         {
//             a = fa[a][i];
//             b = fa[b][i];
//         }
//     }
//     return fa[a][0];
// }