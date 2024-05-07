// articulation point
// const int maxn = 2e4 + 1;
// const int maxm = 1e5 + 1;
// int n, m;

// #define WHITE 0
// #define GRAY 1
// #define BLACK 2
// int color[maxn];
// int dfn[maxn];
// int dfn_cnt;
// int low[maxn];
// bool flag[maxn];
// int flag_cnt;
// vector<int> adj[maxn];

// void tarjan(int u, int father)
// {
//     color[u] = GRAY;
//     low[u] = dfn[u] = ++dfn_cnt;
//     int children = 0;
//     for (auto v : adj[u])
//     {
//         if (color[v] == WHITE)
//         {
//             ++children;
//             tarjan(v, u);
//             low[u] = min(low[u], low[v]);
//             if (low[v] >= dfn[u] && father != 0 && !flag[u])
//             {
//                 flag[u] = true;
//                 ++flag_cnt;
//             }
//         }
//         else if (color[v] == GRAY && v != father)
//             low[u] = min(low[u], dfn[v]);
//     }
//     if (children >= 2 && father == 0 && !flag[u])
//     {
//         flag[u] = true;
//         ++flag_cnt;
//     }
//     color[u] = BLACK;
// }

// scc
// const int maxn = 1e5 + 1;
// const int maxm = 3e5 + 1;
// int n, m;

// #define WHITE 0
// #define GRAY 1
// #define BLACK 2
// int color[maxn];
// int dfn[maxn];
// int dfn_cnt;
// int low[maxn];
// int scc[maxn];
// int scc_size[maxn];
// int scc_cnt;
// vector<int> adj[maxn];
// stack<int> st;
// bool in_stack[maxn];

// void tarjan(int u)
// {
//     color[u] = GRAY;
//     low[u] = dfn[u] = ++dfn_cnt;
//     st.push(u);
//     in_stack[u] = true;
//     for (auto v : adj[u])
//     {
//         if (color[v] == WHITE)
//         {
//             tarjan(v);
//             low[u] = min(low[u], low[v]);
//         }
//         else if (in_stack[v])
//             low[u] = min(low[u], dfn[v]);
//     }
//     if (dfn[u] == low[u])
//     {
//         ++scc_cnt;
//         int size = 0;
//         while (st.top() != u)
//         {
//             int v = st.top();
//             st.pop();
//             in_stack[v] = false;
//             scc[v] = scc_cnt;
//             ++size;
//         }
//         st.pop();
//         in_stack[u] = false;
//         scc[u] = scc_cnt;
//         ++size;
//         scc_size[scc_cnt] = size;
//     }
//     color[u] = BLACK;
// }