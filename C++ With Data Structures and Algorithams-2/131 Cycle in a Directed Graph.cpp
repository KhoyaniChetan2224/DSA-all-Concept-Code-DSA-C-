//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isCyclic(int V, vector<vector<int>> adj) {
        vector<int> inDegree(V, 0);
        for (int vertex = 0; vertex < V; vertex++) {
            for (int neighbor : adj[vertex]) {
                inDegree[neighbor]++;
            }
        }
        queue<int> nodesQueue;
        for (int vertex = 0; vertex < V; vertex++) {
            if (inDegree[vertex] == 0) {
                nodesQueue.push(vertex);
            }
        }
        int processedCount = 0;
        while (!nodesQueue.empty()) {
            int currentNode = nodesQueue.front();
            nodesQueue.pop();
            processedCount++;
            for (int neighbor : adj[currentNode]) {
                inDegree[neighbor]--;
                if (inDegree[neighbor] == 0) {
                    nodesQueue.push(neighbor);
                }
            }
        }
        return processedCount != V;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<vector<int>> adj(V);

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends