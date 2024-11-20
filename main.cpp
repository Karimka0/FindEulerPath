#include <iostream>
#include <vector>
#include <stack>

bool is_oriented = false; // Indicates if the graph is oriented
bool is_cycle = true;     // Tracks if the graph is an Eulerian cycle

// DFS to check connectivity
void Dfs(int v, const std::vector<std::vector<int>> &graph, std::vector<bool> &visited) {
  visited[v] = true;
  for (int u = 0; u < graph[v].size(); ++u) {
    if (graph[v][u] != 0 && !visited[u]) {
      Dfs(u, graph, visited);
    }
  }
}

// Check for Eulerian path or cycle
bool CheckForEulerPath(const std::vector<std::vector<int>> &graph,
                       const std::vector<std::vector<int>> &rev_graph,
                       const std::vector<int> &degrees,
                       const std::vector<int> &in_degrees) {
  int OddDeg = 0;
  int BegDeg = 0;
  int EndDeg = 0;
  int BadDeg = 0;
  for (int i = 0; i < degrees.size(); ++i) {
    if (!is_oriented && degrees[i] % 2 == 1) {
      ++OddDeg;
    } else if (degrees[i] - in_degrees[i] == 1) {
      ++BegDeg;
    } else if (degrees[i] - in_degrees[i] == -1) {
      ++EndDeg;
    } else if (degrees[i] != in_degrees[i]) {
      ++BadDeg;
    }
  }
  if (OddDeg > 2 || BegDeg > 1 || EndDeg > 1 || BadDeg > 0) {
    return false;
  }
  if (OddDeg == 2 || (BegDeg == 1 && EndDeg == 1)) {
    is_cycle = false;
  }
  std::vector<bool> visited(degrees.size());

  // Check for connectivity
  for (int v = 0; v < degrees.size(); ++v) {
    if (degrees[v] > 0) {
      Dfs(v, graph, visited);
      if (is_oriented) {
        Dfs(v, rev_graph, visited);
      }
      break;
    }
  }

  for (int v = 0; v < degrees.size(); ++v) {
    if (degrees[v] > 0 && !visited[v]) {
      return false;
    }
    if (is_oriented && in_degrees[v] > 0 && !visited[v]) {
      return false;
    }
  }

  return true;
}

// Construct and print the Eulerian path
std::vector<int> FindEulerPath(int v, std::vector<std::vector<int>> &graph, const std::vector<int> &degrees) {
  for (int u = 0; u < degrees.size(); ++u) {
    if (degrees[u] % 2 == 1) {
      v = u;
      break;
    }
  }
  std::vector<int> way;
  std::stack<int> S;
  S.push(v);
  while (!S.empty()) {
    int w = S.top();
    bool found_edge = false;
    for (int u = 0; u < degrees.size(); ++u) {
      if (graph[w][u] == 1) {
        S.push(u);
        graph[w][u] = 0;
        if (!is_oriented) {
          graph[u][w] = 0;
        }
        found_edge = true;
        break;
      }
    }
    if (!found_edge) {
      S.pop();
      way.push_back(w);
    }
  }
  return way;
}

int main() {
  std::cout << "Enter the number of vertices in the graph:";
  int n;
  std::cin >> n;
  std::vector<std::vector<int>> graph(n, std::vector<int>(n, 0));
  std::vector<std::vector<int>> rev_graph(n, std::vector<int>(n, 0));
  std::vector<int> in_degrees(n, 0);
  std::vector<int> degrees(n, 0);
  std::cout << "Enter the adjacency matrix for the graph:\n";
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      std::cin >> graph[i][j];
      rev_graph[j][i] = graph[i][j];
      degrees[i] += graph[i][j];
      in_degrees[j] += graph[i][j];
    }
  }

  if (degrees != in_degrees) {
    is_oriented = true;
  }
  if (CheckForEulerPath(graph, rev_graph, degrees, in_degrees)) {
    if (is_cycle) {
      std::cout << "The Eulerian cycle:";
    } else {
      std::cout << "The Eulerian way:";
    }
    std::vector<int> way = FindEulerPath(0, graph, degrees);
    if (is_oriented && !is_cycle) {
      for (int i = way.size() - 1; i >= 0; --i) {
        std::cout << " -> " << way[i];
      }
    } else {
      for (int i : way) {
        std::cout << " -> " << i;
      }
    }
  } else {
    std::cout << "The graph is not Eulerian!";
  }
}
